// #include <string>
#include "InventoryItem.h"

// InventoryItem::InventoryItem (std::string desc, float cst, int u)
// {    
//     description = desc;
//     cost = cst;
//     units = u;
// }

// std::string InventoryItem::getDescription () const
// {   
//     return description;
// }

InventoryItem::InventoryItem(char const *desc, float cst, int u)
{
    description = desc;
    cost = cst;
    units = u;
}

char const *InventoryItem::getDescription()
{
    return description;
}

float InventoryItem::getCost () const 
{
    return cost;
}

int InventoryItem::getUnits () const 
{
    return units;
}