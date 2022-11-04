#include "subsystems/Motors.h"

Motors::Motors() : tfx{0} {} //constructor

void Motors::SetTfx(bool turnOn) {
  if (turnOn) {
    tfx.Set(.7);
  }
  else {
    tfx.Set(0);
  }
}