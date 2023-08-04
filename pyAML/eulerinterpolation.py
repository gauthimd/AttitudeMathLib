import numpy as np
import matplotlib.pyplot as plt

def rotationX(theta):
    return np.array([[1,0,0],
                     [0, np.cos(theta),np.sin(theta)],
                     [0, -np.sin(theta),np.cos(theta)]])

def rotationY(theta):
    return np.array([[np.cos(theta),0,-np.sin(theta)],
                     [0,1,0],
                     [np.sin(theta), 0, np.cos(theta)]])

def rotationZ(theta):
    return np.array([[np.cos(theta), np.sin(theta),0],
                     [-np.sin(theta),np.cos(theta),0],
                     [0,0,1]])

def radToDeg(rad):
    return np.array(rad) * (180.0 / np.pi)

def degToRad(deg):
    return np.array(deg) * (np.pi / 180.0)

def rotationEulerXYZ(attitude_xyz):
    Rx = rotationX(attitude_xyz[0])
    Ry = rotationY(attitude_xyz[1])
    Rz = rotationZ(attitude_xyz[2])
    R = np.matmul(Rx, np.matmul(Ry, Rz))
    return R

def eulerAngleRatesXYZ(attitude, omega_body):
    phi = attitude[0]
    theta = attitude[1]
    psi = attitude[2]
    E = np.array([[1, np.tan(theta)*np.sin(phi), np.tan(theta)*np.cos(phi)],
                  [0, np.cos(phi), np.sin(phi)],
                  [0, np.sin(phi)/np.cos(theta), np.cos(phi)/np.cos(theta)]])
    return np.matmul(E, omega_body)

def printEulerAngles(title, attitude):
    print("Euler Angles {} [{}, {}, {}]".format(title, attitude[0], attitude[1], attitude[2]))

def LinearInterpolate(R0, R1, t):
    return (R0*(1-t) + R1*t)

attitude0 = degToRad([0,0,0])
attitude1 = degToRad([-30,45,135])

printEulerAngles("Start", radToDeg(attitude0))
printEulerAngles("End", radToDeg(attitude1))

attitude_interp = LinearInterpolate(attitude0, attitude1, 0.5)
printEulerAngles("Interp t=0.5", radToDeg(attitude_interp))
