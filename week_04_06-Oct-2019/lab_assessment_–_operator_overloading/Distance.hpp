#ifndef DISTANCE_HPP
#define DISTANCE_HPP

#include <iostream>
using namespace std;

class Distance 
{
    private:
        int feet;
        int inches;

    public:
        Distance () 
        {
            feet = 0;
            inches = 0;
        }

        Distance (int f, int i)
        {
            feet = f;
            inches = i;
        }

        friend ostream &operator<< (ostream &output, const Distance &D)
        {
            output << "F : " << D.feet << " I : " << D.inches;
            return output;
        }

        friend istream &operator>> (istream &input, const Distance &D)
        {
            input >> D.feet >> D.inches;
            return input;
        }
};

#endif