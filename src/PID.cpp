#include "PID.h"
#include <iostream>
#include <cmath>
using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
  p_error = 0;
  i_error =0;
  d_error = 0;
}

void PID::InitThrot(double K_pthrot, double K_ithrot, double K_dthrot)
{
  this->K_pthrot = K_pthrot;
  this->K_ithrot = K_ithrot;
  this->K_dthrot = K_dthrot;

  //p_throterror =0;
  //i_throterror =0;
  //d_throterror =0;
}

void PID::UpdateError(double cte) {
  d_error = cte -p_error;  
  p_error = cte;
  cout << "perror " << p_error << endl;  
  i_error += cte;
  
}



double PID::TotalError() {
  return Kp*p_error + Ki*i_error + Kd*d_error;
  //cout << Kp*p_error;
  //return Kp*p_error;
}

double PID::TotalThrotError() {
  return abs(K_pthrot*p_error) + abs (K_ithrot*i_error) + abs (K_dthrot*d_error);
  //cout << Kp*p_error;
  //return Kp*p_error;
}


