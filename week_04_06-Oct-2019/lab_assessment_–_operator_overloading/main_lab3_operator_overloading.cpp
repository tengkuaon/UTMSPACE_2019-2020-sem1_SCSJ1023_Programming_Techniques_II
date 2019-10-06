#include <iostream>
#include "Box.hpp"
using namespace std;

int main ()
{
    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;
    
    box1.setLength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(5.0);

    box2.setLength(12.0);
    box2.setBreadth(13.0);
    box2.setHeight(10.0);

    volume = box1.getVolume();
    cout << "Volume of box1 : " << volume << endl;
    
    volume = box2.getVolume();
    cout << "Volume of box2 : " << volume << endl;

    box3 = box1 + box2;

    volume = box3.getVolume();
    cout << "Volume of box3 : " << volume << endl;

    return 0;
}