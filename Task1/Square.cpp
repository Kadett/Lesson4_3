//
// Created by User on 022 22.07.21.
//

#include "Square.h"

Square::Square(double side) : Parallelogram(side) {}

double Square::area() {
    return side_a * side_a;
}
