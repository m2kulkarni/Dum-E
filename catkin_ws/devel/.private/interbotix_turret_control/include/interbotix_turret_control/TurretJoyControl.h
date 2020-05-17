// Generated by gencpp from file interbotix_turret_control/TurretJoyControl.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_TURRET_CONTROL_MESSAGE_TURRETJOYCONTROL_H
#define INTERBOTIX_TURRET_CONTROL_MESSAGE_TURRETJOYCONTROL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace interbotix_turret_control
{
template <class ContainerAllocator>
struct TurretJoyControl_
{
  typedef TurretJoyControl_<ContainerAllocator> Type;

  TurretJoyControl_()
    : pan_cmd(0)
    , tilt_cmd(0)
    , speed_cmd(0)
    , toggle_speed_cmd(0)  {
    }
  TurretJoyControl_(const ContainerAllocator& _alloc)
    : pan_cmd(0)
    , tilt_cmd(0)
    , speed_cmd(0)
    , toggle_speed_cmd(0)  {
  (void)_alloc;
    }



   typedef int8_t _pan_cmd_type;
  _pan_cmd_type pan_cmd;

   typedef int8_t _tilt_cmd_type;
  _tilt_cmd_type tilt_cmd;

   typedef int8_t _speed_cmd_type;
  _speed_cmd_type speed_cmd;

   typedef int8_t _toggle_speed_cmd_type;
  _toggle_speed_cmd_type toggle_speed_cmd;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(PAN_CCW)
  #undef PAN_CCW
#endif
#if defined(_WIN32) && defined(PAN_CW)
  #undef PAN_CW
#endif
#if defined(_WIN32) && defined(TILT_UP)
  #undef TILT_UP
#endif
#if defined(_WIN32) && defined(TILT_DOWN)
  #undef TILT_DOWN
#endif
#if defined(_WIN32) && defined(PAN_TILT_HOME)
  #undef PAN_TILT_HOME
#endif
#if defined(_WIN32) && defined(SPEED_INC)
  #undef SPEED_INC
#endif
#if defined(_WIN32) && defined(SPEED_DEC)
  #undef SPEED_DEC
#endif
#if defined(_WIN32) && defined(SPEED_COURSE)
  #undef SPEED_COURSE
#endif
#if defined(_WIN32) && defined(SPEED_FINE)
  #undef SPEED_FINE
#endif

  enum {
    PAN_CCW = 1,
    PAN_CW = 2,
    TILT_UP = 3,
    TILT_DOWN = 4,
    PAN_TILT_HOME = 5,
    SPEED_INC = 6,
    SPEED_DEC = 7,
    SPEED_COURSE = 8,
    SPEED_FINE = 9,
  };


  typedef boost::shared_ptr< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> const> ConstPtr;

}; // struct TurretJoyControl_

typedef ::interbotix_turret_control::TurretJoyControl_<std::allocator<void> > TurretJoyControl;

typedef boost::shared_ptr< ::interbotix_turret_control::TurretJoyControl > TurretJoyControlPtr;
typedef boost::shared_ptr< ::interbotix_turret_control::TurretJoyControl const> TurretJoyControlConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator1> & lhs, const ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator2> & rhs)
{
  return lhs.pan_cmd == rhs.pan_cmd &&
    lhs.tilt_cmd == rhs.tilt_cmd &&
    lhs.speed_cmd == rhs.speed_cmd &&
    lhs.toggle_speed_cmd == rhs.toggle_speed_cmd;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator1> & lhs, const ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace interbotix_turret_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f699b95ec0a0298bd77c4a4d7f52404f";
  }

  static const char* value(const ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf699b95ec0a0298bULL;
  static const uint64_t static_value2 = 0xd77c4a4d7f52404fULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_turret_control/TurretJoyControl";
  }

  static const char* value(const ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Send commands from the joy_node to the turret_control node\n"
"\n"
"# enum values that define the joystick controls for the robot\n"
"\n"
"#########################################################################################################\n"
"\n"
"# Control the pan-and-tilt mechanism\n"
"int8 PAN_CCW = 1\n"
"int8 PAN_CW = 2\n"
"int8 TILT_UP = 3\n"
"int8 TILT_DOWN = 4\n"
"int8 PAN_TILT_HOME = 5\n"
"\n"
"#########################################################################################################\n"
"\n"
"# Customize configurations for the Interbotix Turret\n"
"# Inc/Dec Joint speed\n"
"int8 SPEED_INC = 6\n"
"int8 SPEED_DEC = 7\n"
"\n"
"# Quickly toggle between a fast and slow speed setting\n"
"int8 SPEED_COURSE = 8\n"
"int8 SPEED_FINE = 9\n"
"\n"
"#########################################################################################################\n"
"\n"
"# Control the motion of the pan-and-tilt mechanism\n"
"int8 pan_cmd\n"
"int8 tilt_cmd\n"
"\n"
"# Speed Configs\n"
"int8 speed_cmd\n"
"int8 toggle_speed_cmd\n"
;
  }

  static const char* value(const ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pan_cmd);
      stream.next(m.tilt_cmd);
      stream.next(m.speed_cmd);
      stream.next(m.toggle_speed_cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TurretJoyControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interbotix_turret_control::TurretJoyControl_<ContainerAllocator>& v)
  {
    s << indent << "pan_cmd: ";
    Printer<int8_t>::stream(s, indent + "  ", v.pan_cmd);
    s << indent << "tilt_cmd: ";
    Printer<int8_t>::stream(s, indent + "  ", v.tilt_cmd);
    s << indent << "speed_cmd: ";
    Printer<int8_t>::stream(s, indent + "  ", v.speed_cmd);
    s << indent << "toggle_speed_cmd: ";
    Printer<int8_t>::stream(s, indent + "  ", v.toggle_speed_cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_TURRET_CONTROL_MESSAGE_TURRETJOYCONTROL_H
