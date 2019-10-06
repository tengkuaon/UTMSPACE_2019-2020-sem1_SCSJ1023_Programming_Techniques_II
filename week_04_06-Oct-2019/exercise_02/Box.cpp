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

float Box::getWidth () const
{
    return width;
}

float Box::getLength () const
{
    return length;
}

float Box::getHeight () const
{
    return height;
}

float Box::calculateVolume ()
{
    return width * length * height;
}
