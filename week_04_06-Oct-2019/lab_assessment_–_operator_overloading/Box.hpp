#ifndef BOX_HPP
#define BOX_HPP

class Box 
{
    private:
        double length;
        double breadth;
        double height;

    public:
        double getVolume (void)
        {
            return length * breadth * height;
        }

        void setLength (double len)
        {
            length = len;
        }

        void setBreadth (double bre)
        {
            breadth = bre;
        }

        void setHeight (double hei)
        {
            height = hei;
        }

        Box operator+ (const Box &b)
        {
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        }
};

#endif