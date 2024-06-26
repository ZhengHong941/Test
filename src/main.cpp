#include "main.h"


// define port number
#define motor1_port 1 // change to port used
// #define motor2_port 2



void initialize() {
	
	// Initialise Motor
	// Blue cartridge -- pros::E_MOTOR_GEARSET_06
	// Green cartridge -- pros::E_MOTOR_GEARSET_18
	// Red cartridge -- pros::E_MOTOR_GEARSET_36 
	// true / false -- reverse motor direction / normal motor direction
	pros::Motor motor1(motor1_port, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
	// pros::Motor motor2(motor2_port, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);

}

void disabled() {}

void competition_initialize() {}

void autonomous() {}


double left_joystick_Y_axis;

void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);
	pros::Motor motor1(motor1_port);
	while (true) {
		left_joystick_Y_axis = master.get_analog(ANALOG_LEFT_Y);
		motor1.move(left_joystick_Y_axis);
	}
}