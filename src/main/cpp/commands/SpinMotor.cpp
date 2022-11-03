#include "commands/SpinMotor.h"

SpinMotor::SpinMotor(TalonFX* subsystem) : m_subsystem{subsystem} { //constructor
	AddRequirements(subsystem);
}

void SpinMotor::Initialize() {
	//start the motor spinning
}

void SpinMotor::End(bool interrupted) {
	//Stop the motor spinning
}

//bool SpinMotor::IsFinished() { } return whether it should finish