#pragma once

#include "Robot.h"
#include "math.h"

class PHHSDrive{

    private:
    //General
    const int m_lMotorFrontNum = 3;
    const int m_rMotorFrontNum = 13;
    const double m_neutral = 0; 
    const float m_error = 1.0;
    double m_correction = ((1.0)/(1.0-m_error));

    float endValueLeft = 0;
    float endValueRight = 0;

    rev::CANSparkMax * lMotorFront = new rev::CANSparkMax(m_lMotorFrontNum, rev::CANSparkMax::MotorType::kBrushless);
    rev::CANSparkMax * rMotorFront = new rev::CANSparkMax(m_rMotorFrontNum, rev::CANSparkMax::MotorType::kBrushless);
    
    public:
    const static int axisForUpDown = 4; //1 is for joystick left
    const static int axisForLeftRight = 1; //2 is for joystick right

    void arcadeDriveCalculate(float lStick, float rStick);
    void exponentDrive(float lStick, float rStick);
    void drive(float lStick, float rStick);
};




