#include "dvd.hpp"

namespace SCSJ1023
{
    Dvd::Dvd ()
    {
        title = "UNTITLED";
        price = 0;        
    }

    Dvd::Dvd (std::string Title, float Price)
    {
        title = Title;
        price = Price;        
    }

    std::string Dvd::getTitle () const
    {
        return title;
    }

    float Dvd::getPrice () const
    {
        return price;
    }
}