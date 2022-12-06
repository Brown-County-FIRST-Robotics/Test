#include "commands/SpinTsrx.h"

SpinTsrx::SpinTsrx(Motors* subsystem){
	AddRequirements(subsystem);
	motors = new Motors();
}

void SpinTsrx::Initialize() {
	motors->SetTfx(.7);
}

void SpinTsrx::End(bool interrupted) {
	motors->SetTfx(.7);
}

//bool SpinTfx::IsFinished() { } return whether it should finish