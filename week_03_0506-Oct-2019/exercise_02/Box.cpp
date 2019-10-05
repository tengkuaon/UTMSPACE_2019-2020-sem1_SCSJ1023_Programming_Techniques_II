#include "Box.hpp"

Box::Box (float Width, float Length, float Height)
{
    width = Width;
    length = Length;
    height = Height;
}

void Box::setWidth (float Width)
{
    width = Width;
}

void Box::setLength (float Length)
{
    length = Length;
}

void Box::setHeight (float Height)
{
    height = Height;
}

float Box::getWidth ()
{
    return width;
}

float Box::getLength ()
{
    return length;
}

float Box::getHeight ()
{
    return height;
}

float Box::calculateVolume ()
{
    return width * length * height;
}