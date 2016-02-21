// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef _ROBOT_H
#define _ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

#include "OI.h"

#include "Commands/Autonomous_queue.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/CameraMount.h"
#include "Subsystems/Lifter.h"
#include "Subsystems/Switches.h"
#include "Subsystems/BoulderBlaster.h"

class Robot : public IterativeRobot {
private:
	I2C* i2cBus;
	uint8_t visionStatus, targetPosition;

public:
	static std::unique_ptr<OI> oi;
	LiveWindow *lw = LiveWindow::GetInstance();

	std::unique_ptr<Command> autonomous_queue;
	static std::shared_ptr<DriveTrain> driveTrain;
    static std::shared_ptr<CameraMount> camraMount;
    static std::shared_ptr<Lifter> lifter;
    static std::shared_ptr<Switches> Switch1;
    static std::shared_ptr<BoulderBlaster> boulderBlaster;

    virtual void RobotInit();
	virtual void DisabledInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
};
#endif
