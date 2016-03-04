#include "Autonomous_queue.h"

Autonomous_queue::Autonomous_queue()
{
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.

	//AddSequential(new RollingPinThing(1));

	AddSequential(new Drive_Forward(3.0));
	AddSequential(new Turn(1.5, .75, 0));
	AddSequential(new Turn(2.5, .75, .75));
	AddSequential(new RollingPinThing(1));
	//AddSequential(new RollingPinThing(1));


	/*if(RobotMap::Switch0.get()->Get() == false){
		printf("Switch0 in Auto");

		//AddSequential(new Drive_Forward(3.0));
		//AddSequential(new Turn(2, 0, .5));
		//AddSequential(new Turn(2, -.5, -.5));
		/*
		//AddSequential(new Drive_Forward(3.0));
		//AddSequential(new Turn(1.5, 0, .5));
		//AddSequential(new Turn(2, .7, .5));
		//AddSequential(new Turn(1, -.5, -.5));
		AddSequential(new RollingPinThing(1));
		AddSequential(new RollingPinThing(1));
	}
	else if(RobotMap::Switch1.get()->Get() == false){
		printf("\nSwitch1 in Auto");
		//AddSequential(new Drive_Forward(3.0));
	}



	else if(RobotMap::Switch2.get()->Get() == false){
		printf("\nSwitch2 in Auto");
	}
	else if(RobotMap::Switch3.get()->Get() == false){
		printf("\nSwitch3 in Auto");
	}
	else if(RobotMap::Switch4.get()->Get() == false){
		printf("\nSwitch4 in Auto");
	}
	else if(RobotMap::Switch5.get()->Get() == false){
		printf("\nSwitch5 in Auto");
	}
	else if(RobotMap::Switch1.get()->Get() == true){
		printf("\nSwitch1 in Auto working true");
	}
	else{
		printf("\n????");
	}*/


	//AddSequential(new AutonomousCommand());
}
