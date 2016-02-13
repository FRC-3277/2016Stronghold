// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<CANTalon> driveTrainCANTalonLeft;
	static std::shared_ptr<CANTalon> driveTrainCANTalonRight;
	static std::shared_ptr<RobotDrive> driveTrainRobotDrive21;
	static std::shared_ptr<CANTalon> lifterCANTalon;

	static std::shared_ptr<Spark> armLinearActuator;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static std::shared_ptr<Servo> camraPanServo;
	static std::shared_ptr<Servo> camraTiltServo;
	static std::shared_ptr<DigitalInput> Switch0;
	static std::shared_ptr<DigitalInput> Switch1;
	static std::shared_ptr<DigitalInput> Switch2;
	static std::shared_ptr<DigitalInput> Switch3;
	static std::shared_ptr<DigitalInput> Switch4;
	static std::shared_ptr<DigitalInput> Switch5;
	static std::shared_ptr<DigitalInput> Switch6;
	static std::shared_ptr<DigitalInput> Switch7;
	static std::shared_ptr<DigitalInput> Switch8;
	static std::shared_ptr<DigitalInput> Switch9;

	static void init();
};
#endif
