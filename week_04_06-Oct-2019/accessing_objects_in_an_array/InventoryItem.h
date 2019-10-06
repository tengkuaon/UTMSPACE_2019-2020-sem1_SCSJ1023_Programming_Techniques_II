#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

// #include <string>

class InventoryItem
{
    private:
        // std::string description;        
        char const *description;
        
        float cost;
        int units;

    public:
        // InventoryItem (std::string, float, int);
        // std::string getDescription () const;
        
        InventoryItem(char const *, float, int);
        char const *getDescription ();

        float getCost () const;
        int getUnits () const;
};

#endif