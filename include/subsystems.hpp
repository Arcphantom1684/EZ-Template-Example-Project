#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

inline pros::Motor intake(19);
inline pros::Motor flywheel(-13);
inline pros::adi::DigitalOut pto('A');
inline pros::adi::DigitalOut wing('B');
inline pros::adi::DigitalOut matchloader('C');


// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');