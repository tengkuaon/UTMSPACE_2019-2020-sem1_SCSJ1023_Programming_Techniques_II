#ifndef VENDING_MACHINE_HPP
#define VENDING_MACHINE_HPP

#include "dvd.hpp"

namespace SCSJ1023
{
    class VendingMachine
    {
        private:
            int dvd_count;
            Dvd *all_dvds;

            bool checkInvalidInput () const;

        public:
            VendingMachine ();
            VendingMachine (Dvd[], int);
            
            int getDvdCount () const;
            Dvd *getAllDvds () const;

            void showMenu ();
            float promptToSell () const;
            void promptToSell (float);

            ~VendingMachine ();
    };
}

#endif