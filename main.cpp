#include <iostream>
#include "Task1/Rectangle.h"
#include "Task1/Circle.h"
#include "Task1/Rhombus.h"
#include "Task1/Square.h"
#include "Task2/Car.h"
#include "Task2/Bus.h"
#include "Task2/PassengerCar.h"
#include "Task2/Minivan.h"
#include "Task3/Fraction.h"
#include "Task4/Card.h"


int main() {
    // Task 1
    std::cout << "Task 1:" << "\n";
    Circle circle(15);
    Rhombus rhombus(13, 5);
    Square square(25);
    Rectangle rectangle(10, 8);
    std::cout << "The area of the circle = " << circle.area() << std::endl;
    std::cout << "The area of the rhombus = " << rhombus.area() << std::endl;
    std::cout << "The area of the square = " << square.area() << std::endl;
    std::cout << "The area of the rectangle = " << rectangle.area() << std::endl;
    std::cout << "\n\n";

    // Task 2
    std::cout << "Task 2:" << "\n";
    Minivan minivan;
    minivan.setCompany("Audi");
    minivan.setModel("A6");
    std::cout << "\n\n";

    // Task 3
    std::cout << "Task 3:" << "\n";
    Fraction f1(1, 3);
    Fraction f2(1, 5);

    std::cout << f1.toString() << " + " << f2.toString()<<" = " << (f1 + f2).toString() << std::endl;
    std::cout << f1.toString() << " - " << f2.toString()<<" = " << (f1 - f2).toString() << std::endl;
    std::cout << f1.toString() << " * " << f2.toString()<<" = " << (f1 * f2).toString() << std::endl;
    std::cout << f1.toString() << " / " << f2.toString()<<" = " << (f1 / f2).toString() << std::endl;
    std::cout << "(" << f1.toString() << " == " << f2.toString()<<") - " << ((f1 == f2) ? "true" : "false") << std::endl;
    std::cout <<  "(" << f1.toString() << " != " << f2.toString()<<") - " << ((f1 != f2) ? "true" : "false") << std::endl;
    std::cout <<  "(" << f1.toString() << " < " << f2.toString()<<") - "  << ((f1 < f2) ? "true" : "false") << std::endl;
    std::cout <<  "(" << f1.toString() << " >= " << f2.toString()<<") - "  << ((f1 >= f2) ? "true" : "false") << std::endl;
    std::cout <<  "(" << f1.toString() << " > " << f2.toString()<<") - "  << ((f1 > f2) ? "true" : "false") << std::endl;
    std::cout <<  "(" << f1.toString() << " <= " << f2.toString()<<") - "  << ((f1 <= f2) ? "true" : "false") << std::endl;



    return 0;
}
