#ifndef DVD_HPP
#define DVD_HPP

#include <string>

namespace SCSJ1023
{
    class Dvd
    {
        private:
            std::string title;
            float price;
        
        public:
            Dvd ();
            Dvd (std::string, float);

            std::string getTitle () const;
            float getPrice () const;
    };
}

#endif