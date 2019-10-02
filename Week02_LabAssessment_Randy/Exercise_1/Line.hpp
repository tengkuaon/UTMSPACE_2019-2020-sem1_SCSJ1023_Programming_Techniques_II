// 22 September 2019
//
// UTMSPACE Semester 1 2019-20
// Exercise 1: Class Constructors and Destructor
// Lab 02 Week 02
// SCSJ1023 Programming Techniques II
//
// Randy Tan Shaoxian SX180357CSJS04
// Charlene Ng Andrew SX180355CSJS04

#ifndef LINE_HPP
#define LINE_HPP

class Line 
{
    private:
        float x1, y1, x2, y2;
        float m, c;
        float calculateSlope (float, float, float, float);
        float calculateIntercept (float, float, float);

    public:
        Line ();
        Line (float, float);
        Line (float, float, float, float);
        ~Line ();

        float getX1 () const;
        float getY1 () const;
        float getX2 () const;
        float getY2 () const;
        float getM () const;
        float getC () const;

        void setX1 (float);
        void setY1 (float);
        void setX2 (float);
        void setY2 (float);
        void setM (float);
        void setC (float);
        
        void printEquation ();
};

#endif