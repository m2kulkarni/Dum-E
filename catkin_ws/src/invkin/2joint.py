import numpy as np

def rotmat(theta1):
    return np.array([[np.cos(theta1), -np.sin(theta1), 0], [np.sin(theta1), np.cos(theta1), 0], [0, 0, 1]])

def trans(l1, l2):
    return np.array([[1, 0, l1], [0, 1, l2], [0, 0, 1]])

def forward():
    print("Enter Angle in degrees")
    theta1 = int(input("\u03B8\u2081: "))*np.pi/180
    theta2 = int(input("\u03B8\u2082: "))*np.pi/180

    l1 = 10
    l2 = 10
    
    
    
    origin = np.array([0, 0, 1]).reshape(3,1)
    point1 = np.dot(np.dot(rotmat(theta1),trans(l1, 0)), origin)
    point2 = np.dot(np.dot(rotmat(theta2),trans(l2, 0)), point1)
    
    print(point1)
    print(point2)

def backward():
    x0, y0 = [float(x) for x in input("Enter points x0, y0: ").split(',')] 
    x2, y2 = [float(x) for x in input("Enter points x2, y2: ").split(',')]
    l1=10.0
    l2=10.0
    x2 = x2 - x0
    y2 = y2 - y0
    theta2 = np.arccos((x2**2 + y2**2 - (l1**2 + l2**2))/(2*l1*l2))
    #print(theta2)

    theta1 = np.arctan(y2/x2) - np.arctan((l2*np.sin(theta2))/(l1 + l2*np.cos(theta2)))
    print("Theta 1: ", theta1*180/np.pi)
    print("Theta 2: ", theta2*180/np.pi)
    print("Point1: ", x0+l1*np.cos(theta1), ",", y0+l1*np.sin(theta1))
#forward()
backward()
