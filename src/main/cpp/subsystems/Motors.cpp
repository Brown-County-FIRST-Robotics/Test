#include "subsystems/Motors.h"

Motors::Motors() : out{0} {} //constructor

void Motors::SetTfx(bool turnOn) {
  if (turnOn) {
    out.SetVoltage(0);
  }
  else {
    out.SetVoltage(0);
  }
}