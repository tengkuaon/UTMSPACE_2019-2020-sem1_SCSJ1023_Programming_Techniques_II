#include <iostream>
#include <iomanip>
#include "../InventoryItem.h"
using namespace std;

int main ()
{
    // Define InventoryItem objects with the following data:
    InventoryItem burger("Burget Meat", 6.95, 12);
    InventoryItem shampoo("Shampoo Antiduff", 12.00, 40);
    InventoryItem milk("Fernleaf Milk", 8.75, 20);

    // Set numeric output formatting.
    cout << setprecision(2) << fixed << showpoint;

    cout << "The following items are in inventory: " << endl;

    // Display the objects data.
    cout << "Description: " << burger.getDescription() << endl;
    cout << "Cost: RM" << burger.getCost() << endl;
    cout <<"Units on Hand: " << burger.getUnits() << endl;
    
    cout << endl;
    
    cout << "Description: " << shampoo.getDescription() << endl;
    cout << "Cost: RM" << shampoo.getCost() << endl;
    cout <<"Units on Hand: " << shampoo.getUnits() << endl;
    
    cout << endl;

    cout << "Description: " << milk.getDescription() << endl;
    cout << "Cost: RM" << milk.getCost() << endl;
    cout <<"Units on Hand: " << milk.getUnits() << endl;
    // system("pause"); // Not available on Linux
    return 0;
}