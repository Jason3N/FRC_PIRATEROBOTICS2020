/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

//Adrian Lam


#include "Robot.h"

void Robot::RobotInit() {}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() 
{
   

    if(m_stick.GetRawButton(PHHSShooter::kShooterMotorOnBtn))
    {
        shooter.shooterOn(PHHSShooter::kShooterMotor1);

        shooter.shooterOn(PHHSShooter::kShooterMotor2);
    }
    
    
    if(m_stick.GetRawButton(PHHSShooter::kShooterMotorOffBtn))
    {
        shooter.shooterOff(PHHSShooter::kShooterMotorOff);
    }
   

    

    
}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
