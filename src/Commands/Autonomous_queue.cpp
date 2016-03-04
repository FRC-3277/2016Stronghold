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

	//AddSequential(new RollingPinThing(1));

	printf("Running auto\n");
	if(RobotMap::Switch1.get()->Get() == false){
		printf("Switch0 in Auto");

		//if placed on low bar, drive forward, turn right, go forward, shoot, back up,
		AddSequential(new Drive_Forward(3.0));
		AddSequential(new Turn(1.25, .75, 0));
		AddSequential(new Turn(3.15, .75, .75));
		AddSequential(new RollingPinThing(1));
		AddSequential(new Turn(1, 0, 0));
		AddSequential(new Turn(3, -.75, -.75));
		AddSequential(new Turn(1.25, -75, 0));
	}
	else if(RobotMap::Switch2.get()->Get() == false){
		printf("\nSwitch1 in Auto");

		//if placed in middle, drive forward, turn right, turn left, go forward, shoot right side
		AddSequential(new Drive_Forward(3.0));
		AddSequential(new Turn(1.5, .75, 0));
		AddSequential(new Turn(1, .75, .75));
		AddSequential(new Turn(1, 0, .75));
		AddSequential(new Turn(1, .75, .75));
		AddSequential(new RollingPinThing(1));
	}
	else if(RobotMap::Switch3.get()->Get() == false){
		printf("\nSwitch2 in Auto");
		//AddSequential(new RollingPinThing(1.0));

		//placed right side, go forward, turn left, go forward, shoot
		AddSequential(new Turn(3.5, .9, .9));
		AddSequential(new Turn(1.5, 0, .75));
		AddSequential(new Turn(3.15, .75, .75));
		AddSequential(new RollingPinThing(1));
		AddSequential(new Turn(1, 0, 0));
		AddSequential(new Turn(3, -.75, -.75));
		AddSequential(new Turn(1, 0, -.75));
	}
	else if(RobotMap::Switch4.get()->Get() == false){
		printf("\nSwitch3 in Auto");
		//AddSequential(new RollingPinThing(1.5));

		//no movement
	}
	else if(RobotMap::Switch5.get()->Get() == false){
		printf("\nSwitch4 in Auto");
		//AddSequential(new RollingPinThing(2.0));

		//Approach barrier
		AddSequential(new Drive_Forward(1.5));
	}
	else if(RobotMap::Switch6.get()->Get() == false){
		printf("\nSwitch5 in Auto");
		//AddSequential(new RollingPinThing(2.5));

		//Cross barrier only
		AddSequential(new Turn(3, .85, .85));
	}
	else if(RobotMap::Switch7.get()->Get() == true){
		printf("\nSwitch1 in Auto working true");
		//AddSequential(new RollingPinThing(3));
	}
	else{
		printf("\n????");
		//AddSequential(new RollingPinThing(4));
	}



	//AddSequential(new AutonomousCommand());
}
