#include "commands/SpinTfx.h"

SpinTfx::SpinTfx(Motors* subsystem){
	AddRequirements(subsystem);
	motors = new Motors();
}

void SpinTfx::Initialize() {
	motors->SetTfx(.7);
}

void SpinTfx::End(bool interrupted) {
	motors->SetTfx(.7);
}

//bool SpinTfx::IsFinished() { } return whether it should finish