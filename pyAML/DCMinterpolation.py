import numpy as np

def rotationX(theta):
    return np.array([[1,0,0],
                     [0,np.cos(theta), np.sin(theta)],
                     [0, -np.sin(theta), np.cos(theta)]])

def linearInterpolate(R1, R2, t):
    return (R1*(1-t) + R2*t)

R1 = rotationX(30.0*(np.pi/180.0))
R2 = rotationX(130.0*(np.pi/180.0))
print("R1 {}".format(R1))
print("R2 {}".format(R2))

R_interp = linearInterpolate(R1, R2, 0.5)
print("R_interp {}".format(R_interp))

R_interp_det = np.linalg.det(R_interp)
R_interp_eye = np.matmul(R_interp, np.transpose(R_interp))
print("R_interp_det {}".format(R_interp_det))
print("R_inter_eye {}".format(R_interp_eye))

R_truth = rotationX(80.0*(np.pi/180.0))
print("R_truth {}".format(R_truth))
