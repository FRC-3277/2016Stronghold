#include <Commands/Turn.h>

Turn::Turn(float a, float leftspeed, float rightspeed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::driveTrain.get());
	TimeStop = a;
	leftSpeed = -leftspeed;
	rightSpeed = -rightspeed;
}

// Called just before this Command runs the first time
void Turn::Initialize()
{
	Robot::driveTrain.get()->openmotors();
	TimeCount = 0;
}

// Called repeatedly when this Command is scheduled to run
void Turn::Execute()
{
	Robot::driveTrain.get()->setdrive(leftSpeed, rightSpeed);
	TimeCount += 0.02;
}

// Make this return true when this Command no longer needs to run execute()
bool Turn::IsFinished()
{
	if (TimeCount > TimeStop)
		return true;
	else
		return false;
}

// Called once after isFinished returns true
void Turn::End()
{
	Robot::driveTrain.get()->setdrive(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Turn::Interrupted()
{

}
