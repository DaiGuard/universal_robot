#ifndef UR10_KIN_H
#define UR10_KIN_H


namespace ur_kinematics {
  void ur10_forward(const double* q, double* T);
  void ur10_forward_all(const double* q, double* T1, double* T2, double* T3, 
                                    double* T4, double* T5, double* T6);
  int ur10_inverse(const double* T, double* q_sols, double q6_des=0.0);
}


#endif