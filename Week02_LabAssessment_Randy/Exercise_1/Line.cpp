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

float Line::calculateSlope(float X1, float Y1, float X2, float Y2)
{
    return (Y2 - Y1) / (X2 - X1);
}

float Line::calculateIntercept (float Y1, float M, float X1)
{
    return Y1 - M * X1;
}

Line::Line() 
{
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 0;
    m = 0;
    c = 0;
}

Line::Line (float M, float C)
{
    m = M;
    c = C;
}

Line::Line (float X1, float Y1, float X2, float Y2)
{
    x1 = X1;
    y1 = Y1;
    x2 = X2;
    y2 = Y2;

    m = calculateSlope(X1, Y1, X2, Y2);
    c = calculateIntercept(Y1, m, X1);
}

Line::~Line ()
{
    std::cout << "The object is being destroyed." << std::endl;
}

float Line::getX1 () const
{
    return x1;
}

float Line::getY1 () const
{
    return y1;
}

float Line::getX2 () const
{
    return x2;
}

float Line::getY2 () const
{
    return y2;
}

float Line::getM () const
{
    return m;
}

float Line::getC () const
{
    return c;
}

void Line::setX1 (float X1)
{
    x1 = X1;
}

void Line::setY1 (float Y1)
{
    y1 = Y1;
}

void Line::setX2 (float X2)
{
    x2 = X2;
}

void Line::setY2 (float Y2)
{
    y2 = Y2;
}

void Line::setM (float M)
{
    m = M;
}

void Line::setC (float C)
{
    c = C;
}

void Line::printEquation ()
{    
    std::cout << "Eq.    y=" << m << "x";
    if (c != 0)
    {
        std::cout << (c > 0 ? "+" : "") << c;
    }
    std::cout << std::endl << std::endl;
}