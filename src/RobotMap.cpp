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
std::shared_ptr<CANJaguar> RobotMap::lifterCANJaguar;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

std::shared_ptr<Servo> RobotMap::camraPanServo;
std::shared_ptr<Servo> RobotMap::camraTiltServo;

const int DRIVE_TRAIN_CAN_JAGUAR_LEFT_ID = 4; //TODO: Actually should be 2
const int DRIVE_TRAIN_CAN_JAGUAR_RIGHT_ID = 3;
const int LIFTER_CAN_JAGUAR_ID = 2; //TODO: Actually should be 4

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveTrainCANJaguarLeft.reset(new CANTalon(1));
    driveTrainCANJaguarLeft.reset(new CANJaguar(DRIVE_TRAIN_CAN_JAGUAR_LEFT_ID));
    lw->AddActuator("DriveTrain", "CAN Jaguar Left", driveTrainCANJaguarLeft);
    
    driveTrainCANJaguarRight.reset(new CANTalon(2));
    driveTrainCANJaguarRight.reset(new CANJaguar(DRIVE_TRAIN_CAN_JAGUAR_RIGHT_ID));
    lw->AddActuator("DriveTrain", "CAN Jaguar Right", driveTrainCANJaguarRight);
    
    lifterCANJaguar.reset(new CANJaguar(LIFTER_CAN_JAGUAR_ID));
       lw->AddActuator("DriveTrain", "CAN Jaguar Right", driveTrainCANJaguarRight);
       //lifterCANJaguar.get()->ConfigLimitMode(lifterCANJaguar.get()->kLimitMode_SwitchInputsOnly);
    driveTrainRobotDrive21.reset(new RobotDrive(driveTrainCANJaguarLeft, driveTrainCANJaguarRight));
    
    driveTrainRobotDrive21->SetSafetyEnabled(true);
        driveTrainRobotDrive21->SetExpiration(0.1);
        driveTrainRobotDrive21->SetSensitivity(0.5);
        driveTrainRobotDrive21->SetMaxOutput(1.0);


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    camraPanServo.reset(new Servo(9));
    camraTiltServo.reset(new Servo(8));
    camraPanServo.get()->SetAngle(90);
}
