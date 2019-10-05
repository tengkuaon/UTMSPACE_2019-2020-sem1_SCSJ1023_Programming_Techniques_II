#include "Rectangle.h"

Rectangle::Rectangle () 
{
    width = 0;
    length = 0;
}

Rectangle::Rectangle (const Rectangle &rect)
{
    width = rect.width;
    length = rect.length;
}

Rectangle::Rectangle (float Width, float Length)
{
    width = Width;
    length = Length;
}

float Rectangle::getWidth () const
{
    return width;
}

float Rectangle::getLength () const
{
    return length;
}