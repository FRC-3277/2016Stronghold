#ifndef Lifter_H
#define Lifter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lifter: public Subsystem
{
private:
	std::shared_ptr<CANTalon> armExtendCANTalon;
	std::shared_ptr<CANTalon> armLinearActuatorCANTalon;
	std::shared_ptr<CANTalon> armWinchCANTalon1;
	std::shared_ptr<CANTalon> armWinchCANTalon2;
	std::shared_ptr<Relay> armRatchet;

public:
	Lifter();
	void InitDefaultCommand();
	void pushArmOut();
	void pullArmIn();
	void stopActuator();

	void Raise();
	void PullUp();
	void Stop();
};

#endif
