// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Robot.h"

std::shared_ptr<DriveTrain> Robot::driveTrain;
std::unique_ptr<OI> Robot::oi;
std::shared_ptr<CameraMount> Robot::camraMount;
std::shared_ptr<Lifter> Robot::lifter;
std::shared_ptr<Switches> Robot::Switch1;
std::shared_ptr<BoulderBlaster> Robot::boulderBlaster;

void Robot::RobotInit() {
	RobotMap::init();

	autonomous_queue.reset(new Autonomous_queue());
	driveTrain.reset(new DriveTrain());
    camraMount.reset(new CameraMount());
    lifter.reset(new Lifter());
    boulderBlaster.reset(new BoulderBlaster());
	Switch1.reset(new Switches());

	i2cBus = new I2C(I2C::kMXP, 0x29);

    CameraServer::GetInstance()->SetQuality(50);
   	CameraServer::GetInstance()->StartAutomaticCapture("cam0");

   	oi.reset(new OI());
  }

void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit() {
	if (autonomous_queue.get() != nullptr)
		autonomous_queue->Start();
}

void Robot::AutonomousPeriodic() {
	/*i2cBus->Read(0x00, 1, &_3277_visionStatus);
	if(_3277_visionStatus != 0) //Can I see anything?
	{
		switch(_3277_visionStatus)
		{
		case 0x01: //I see the goal
			i2cBus->Read(0x01, 1, &_3277_targetPosition);
			break;
		case 0x02: //I see the LowBar
			i2cBus->Read(0x02, 1, &_3277_targetPosition);
			break;
		default:
			printf("I2C error: Status is not 0, 1, or 2!");
		}
	}
	printf("VisionStatus: %d\tTarget: %d\n", _3277_visionStatus, _3277_targetPosition);*/
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
	if (autonomous_queue.get() != nullptr)
		autonomous_queue->Cancel();
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);

