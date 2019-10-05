#include <iostream>
#include "Box.hpp"

void printBox (Box box);

int main ()
{        
    const int BOXES_COUNT = 5;    
    Box boxes[BOXES_COUNT] = {
        Box(10, 10, 10),
        Box(20, 20, 20),
        Box(),
        Box(),
        Box()
    };

    const int START_INDEX = 2;
    for (int i = START_INDEX; i < BOXES_COUNT; ++i) 
    {
        std::cout << "Enter box dimensions (w l h) => ";

        float width, length, height;
        std::cin >> width >> length >> height;
        
        boxes[i].setWidth(width);
        boxes[i].setLength(length);
        boxes[i].setHeight(height);
    }

    float sumOfVolumes = 0;
    for (int i = 0; i < BOXES_COUNT; ++i)
    {
        printBox(boxes[i]);
        std::cout << std::endl;

        sumOfVolumes += boxes[i].calculateVolume();
    }

    std::cout << "Total volume = " << sumOfVolumes << std::endl;
    
    return 0;
}

void printBox (Box box) 
{    
    std::cout << "Dimension = " << box.getWidth() << " x ";
    std::cout << box.getLength() << " x ";
    std::cout << box.getHeight() << std::endl;
    std::cout << "Volume = " << box.calculateVolume() << std::endl;
}