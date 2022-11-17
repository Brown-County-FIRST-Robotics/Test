#include "subsystems/Motors.h"
#include <iostream>

Motors::Motors() : tfx{0} {} //constructor

void Motors::SetTfx(bool turnOn) {
  if (turnOn) {
      tfx.Set(0.7);
  }
  else {
    tfx.Set(0);
  }
}
