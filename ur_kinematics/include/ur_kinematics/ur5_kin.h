#ifndef UR5_KIN_H
#define UR5_KIN_H


namespace ur_kinematics {
  void ur5_forward(const double* q, double* T);
  void ur5_forward_all(const double* q, double* T1, double* T2, double* T3, 
                                    double* T4, double* T5, double* T6);
  int ur5_inverse(const double* T, double* q_sols, double q6_des=0.0);
}


#endif