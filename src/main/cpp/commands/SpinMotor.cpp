#include "commands/SpinMotor.h"

SpinMotor::SpinMotor(Motors* subsystem){
	AddRequirements(subsystem);
	motors = new Motors();
}

void SpinMotor::Initialize() {
	motors->SetTfx(true);
}

void SpinMotor::End(bool interrupted) {
	motors->SetTfx(false);
}

//bool SpinMotor::IsFinished() { } return whether it should finish