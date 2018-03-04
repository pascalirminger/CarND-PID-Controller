#include "PID.h"

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    // Initialize coefficients
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;

    // Initialize errors
    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;
}

void PID::UpdateError(double cte) {
    // Differential error, using previous cte (stored in p_error)
    d_error = cte - p_error;
    // Proportional error
    p_error = cte;
    // Integral error
    i_error += cte;
}

double PID::TotalError() {
    // Calculate the total PID error
    return -Kp * p_error - Ki * i_error - Kd * d_error;
}

