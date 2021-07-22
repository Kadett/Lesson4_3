//
// Created by User on 022 22.07.21.
//

#include "Circle.h"

Circle::Circle(double radius): radius(radius) {}

double Circle::area() {
    return M_PI * radius * radius;
}
