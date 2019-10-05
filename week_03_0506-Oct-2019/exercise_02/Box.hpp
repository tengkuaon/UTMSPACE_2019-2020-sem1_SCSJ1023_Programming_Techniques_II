#ifndef BOX_HPP
#define BOX_HPP

class Box
{
    private:
        // Attributes representing the dimensions
        float width;
        float length;
        float height;

    public:
        // Constructor with default arguments
        Box (float width = 0, float length = 0, float height = 0);

        // Mutators (a. k. a. setters)
        void setWidth (float);
        void setLength (float);
        void setHeight (float);

        // Accessors (a. k. a. getters)
        float getWidth ();
        float getLength ();
        float getHeight ();

        // Method that calculates the volume
        float calculateVolume ();
};

#endif