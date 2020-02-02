
#ifndef INTAKE
#define INTAKE

#include "ctre/Phoenix.h"


class PHHSIntake
{

private:
//motor IDs
const int kIntakemotorID = 8;
const int kIndexingMotorID = 20;

//Motor Control limits 
const int kPeakCurrentAmp = 15; //Max. before tirggering current limit 
const int kContinCurrentAmps = 0; //hold current after limit is tirgged
//Motor Control Time 
const int kTimeoutMs = 0; //How much time to check (if 0 then it will skip the check)
const int kPeakTimeMs = 0; //How long after peak current to stop motors



const float kIntakeDown = 1.0;

WPI_TalonSRX m_intakeMotor{kIntakemotorID};
WPI_TalonSRX m_indexingMotor{kIndexingMotorID};

public:
constexpr static float kDownwardMotor = 1.0;
constexpr static float kUpwardMotor = -1.0;

constexpr static int kDownwardMotorBtn = 1; //button A on Xbox 360 
constexpr static int kUpwardMotorBtn = 2; //button B on Xbox 360 

void suckSpeed(float speed);
 //Button Toggle to move motor down until hit ground 
void lowerIntake(float motorSpeed); 
//Button Toggle to move intake system upwards
void raiseIntake(float motorSpeed);


void motorInit();

void robotInit();
};
#endif