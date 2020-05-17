#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/mohit/Dum-E/catkin_ws/src/interbotix_ros_arms/interbotix_sdk"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/mohit/Dum-E/catkin_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/mohit/Dum-E/catkin_ws/install/lib/python2.7/dist-packages:/home/mohit/Dum-E/catkin_ws/build/interbotix_sdk/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/mohit/Dum-E/catkin_ws/build/interbotix_sdk" \
    "/usr/bin/python2" \
    "/home/mohit/Dum-E/catkin_ws/src/interbotix_ros_arms/interbotix_sdk/setup.py" \
    build --build-base "/home/mohit/Dum-E/catkin_ws/build/interbotix_sdk" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/mohit/Dum-E/catkin_ws/install" --install-scripts="/home/mohit/Dum-E/catkin_ws/install/bin"
