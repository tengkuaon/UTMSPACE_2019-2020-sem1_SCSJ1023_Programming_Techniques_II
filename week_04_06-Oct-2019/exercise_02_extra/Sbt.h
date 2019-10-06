#ifndef SBT_H
#define SBT_H

#include <iostream>

class Sbt
{
    private:
        int arr_length;
        int *arr;

    public:        
        Sbt (int size = 10);

        bool operator== (Sbt &);
        void operator= (Sbt &);
        
        friend std::istream &operator>> (std::istream &, Sbt &);
        friend std::ostream &operator<< (std::ostream &, const Sbt &);

        int getArrLength () const;
        int *getArr () const;
};

#endif