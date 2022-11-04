#include "commands/SpinMotor.h"

SpinMotor::SpinMotor(Motors* subsystem) : m_subsystem{subsystem} { //constructor
	AddRequirements(subsystem);
}

void SpinMotor::Initialize() {
	m_subsystem->SetTfx(true);
}

void SpinMotor::End(bool interrupted) {
	m_subsystem->SetTfx(false);
}

//bool SpinMotor::IsFinished() { } return whether it should finish