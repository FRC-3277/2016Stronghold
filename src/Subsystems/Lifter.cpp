#include "Lifter.h"
#include "../RobotMap.h"

Lifter::Lifter() :
		Subsystem("ExampleSubsystem")
{
	lifterCANJaguar = RobotMap::lifterCANTalon;
	lifterCANJaguar.get()->SetControlMode(CANTalon::kPercentVbus);
	lifterCANJaguar.get()->EnableControl();
	lifterCANJaguar.get()->Set(0.0f);

	armCANTalon = RobotMap::armCANTalon;
	armCANTalon.get()->SetControlMode(CANTalon::kPercentVbus);
	armCANTalon.get()->EnableControl();
	armCANTalon.get()->Set(0.0f);
}

void Lifter::InitDefaultCommand()
{

}

void Lifter::pushArmOut(){printf("Lifter::pushArmOut\n");
	armLinearActuator.get()->Set(1);
}

void Lifter::pullArmIn(){printf("Lifter::pullArmIn\n");
	armLinearActuator.get()->Set(-1);
}

void Lifter::stopHorizontal(){printf("Lifter::stopHorizontal\n");
	armLinearActuator.get()->Set(0);
}

void Lifter::Raise(){printf("Lifter::Raise\n");
	lifterCANJaguar.get()->Set(.5);
}

void Lifter::PullUp(){printf("Lifter::PullUp\n");
	lifterCANJaguar.get()->Set(-.5);
}

void Lifter::Stop(){printf("Lifter::Stop\n");
	lifterCANJaguar.get()->Set(0);
}
