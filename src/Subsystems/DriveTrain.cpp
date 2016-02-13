// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme
//byteme






#include "DriveTrain.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/DriveWithJoysticks.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    cANJaguarLeft = RobotMap::driveTrainCANTalonLeft;
    cANJaguarRight = RobotMap::driveTrainCANTalonRight;
    robotDrive21 = RobotMap::driveTrainRobotDrive21;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void DriveTrain::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new DriveWithJoysticks());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void DriveTrain::setdrive(float speedleft, float speedright){
	robotDrive21.get()->TankDrive(speedleft, speedright);
	//printf("speedleft %f speedright %f\n", speedleft, speedright);
	//cANJaguarright.get()->Set(-speed);
	//cANJaguarleft.get()->Set(speed);
}

void DriveTrain::openmotors(){
	printf("DriveTrain: openMotors");
	cANJaguarLeft.get()->SetControlMode(CANSpeedController::kPercentVbus);
	cANJaguarRight.get()->SetControlMode(CANSpeedController::kPercentVbus);
	cANJaguarRight.get()->EnableControl();
	cANJaguarRight.get()->Set(0.0f);

	//cANJaguarLeft.get()->SetPercentMode(CANJaguar::QuadEncoder, 360);
	cANJaguarLeft.get()->EnableControl();
	cANJaguarLeft.get()->Set(0.0f);
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

