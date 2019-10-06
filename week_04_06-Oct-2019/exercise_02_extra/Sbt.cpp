#include <iostream>
#include "Sbt.h"

Sbt::Sbt (int size)
{
    arr_length = size;    
    arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = 0;
    }
}

bool Sbt::operator== (Sbt &rhs)
{
    if (this->arr_length == rhs.arr_length)
    {
        for (int i = 0; i < this->arr_length; ++i)
        {
            if (this->arr[i] != rhs.arr[i])
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }

    return true;
}

void Sbt::operator= (Sbt &rhs)
{
    if (this->arr != rhs.arr)
    {
        if (this->arr_length != rhs.arr_length)
        {
            int new_arr_size = this->arr_length + rhs.arr_length;
            int new_arr[new_arr_size];
            
            for (int i = 0; i < this->arr_length; ++i)
            {
                new_arr[i] = this->arr[i];
            }

            for (int i = this->arr_length; i < new_arr_size; ++i)
            {
                new_arr[i] = rhs.arr[i];
            }
        }
    }
}

int Sbt::getArrLength () const 
{
    return arr_length;
}

int *Sbt::getArr () const
{
    return arr;
}