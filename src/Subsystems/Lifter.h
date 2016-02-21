#ifndef Lifter_H
#define Lifter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lifter: public Subsystem
{
private:
	std::shared_ptr<CANTalon> lifterCANJaguar;
	std::shared_ptr<Spark> armLinearActuator;
	std::shared_ptr<CANTalon> armCANTalon;
public:
	Lifter();
	void InitDefaultCommand();
	void pushArmOut();
	void pullArmIn();
	void stopHorizontal();
	void Raise();
	void PullUp();
	void Stop();
};

#endif
