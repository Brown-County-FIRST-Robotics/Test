#include "commands/SpinMotor.h"

SpinMotor::SpinMotor(Motors* subsystem) : motors{subsystem} {
	AddRequirements(subsystem);
}

void SpinMotor::Initialize() {
	motors->SetTfx(true);
}

void SpinMotor::End(bool interrupted) {
	motors->SetTfx(false);
}

//bool SpinMotor::IsFinished() { } return whether it should finish