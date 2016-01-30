// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<CANTalon> RobotMap::driveTrainCANJaguarLeft;
std::shared_ptr<CANTalon> RobotMap::driveTrainCANJaguarRight;
std::shared_ptr<RobotDrive> RobotMap::driveTrainRobotDrive21;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

std::shared_ptr<Servo> RobotMap::camraPanServo;
std::shared_ptr<Servo> RobotMap::camraTiltServo;

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveTrainCANJaguarLeft.reset(new CANTalon(1));
    lw->AddActuator("DriveTrain", "CAN Jaguar Left", driveTrainCANJaguarLeft);
    
    driveTrainCANJaguarRight.reset(new CANTalon(2));
    lw->AddActuator("DriveTrain", "CAN Jaguar Right", driveTrainCANJaguarRight);
    
    driveTrainRobotDrive21.reset(new RobotDrive(driveTrainCANJaguarLeft, driveTrainCANJaguarRight));
    
    driveTrainRobotDrive21->SetSafetyEnabled(true);
        driveTrainRobotDrive21->SetExpiration(0.1);
        driveTrainRobotDrive21->SetSensitivity(0.5);
        driveTrainRobotDrive21->SetMaxOutput(1.0);


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    camraPanServo.reset(new Servo(9));
    camraTiltServo.reset(new Servo(8));
}
