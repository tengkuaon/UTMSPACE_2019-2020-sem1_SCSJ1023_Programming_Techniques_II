// 22 September 2019
//
// UTMSPACE Semester 1 2019-20
// Exercise 1: Class Constructors and Destructor
// Lab 02 Week 02
// SCSJ1023 Programming Techniques II
//
// Randy Tan Shaoxian SX180357CSJS04
// Charlene Ng Andrew SX180355CSJS04

#include <iostream>
#include "Line.hpp"

int main ()
{
    Line line1 (2, -5);
    line1.printEquation();

    Line line2 (0, 0, 2, 8);
    line2.printEquation();

    Line line3;
    float m, c;
    std::cout << "Enter the slope and y-intercept of the line, m c => ";
    std::cin >> m >> c;
    line3.setM(m);
    line3.setC(c);
    std::cout << std::endl;
    line3.printEquation();

    return 0;
}