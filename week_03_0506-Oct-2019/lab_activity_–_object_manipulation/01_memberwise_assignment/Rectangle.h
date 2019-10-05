#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle 
{
    private:
        float width;
        float length;

    public:
        Rectangle ();
        Rectangle (const Rectangle &);
        Rectangle (float, float);

        float getWidth () const;
        float getLength () const;
};

#endif