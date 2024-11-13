#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
controller Controller1 = controller(primary);

motor intake = motor(PORT2, ratio6_1, true);
motor LeftDTMotorA = motor(PORT3, ratio6_1, true);
motor LeftDTMotorB = motor(PORT11, ratio6_1, true);
motor LeftDTMotorC = motor(PORT19, ratio6_1, true);
motor_group LeftDT = motor_group(LeftDTMotorA, LeftDTMotorB, LeftDTMotorC);
motor RightDTMotorA = motor(PORT9, ratio6_1, false);
motor RightDTMotorB = motor(PORT4, ratio6_1, false);
motor RightDTMotorC = motor(PORT10, ratio6_1, false);
motor ramp = motor(PORT5, ratio6_1, true);
motor_group RightDT = motor_group(RightDTMotorA, RightDTMotorB, RightDTMotorC);

digital_out mogo_clamp = digital_out(Brain.ThreeWirePort.B);
inertial inertialSensor = inertial(PORT20);
light lightSensor = light(Brain.ThreeWirePort.A);

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  
}
