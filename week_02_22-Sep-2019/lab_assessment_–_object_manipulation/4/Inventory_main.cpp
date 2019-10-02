#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main ()
{
    // Define an InventoryItem object with the following data:
    InventoryItem stock("Fernleaf Milk", 8.75, 20);

    // Set numeric output formatting.
    cout << setprecision(2) << fixed << showpoint;

    // Display the object's data.
    cout << "Item Description: " << stock.getDescription() << endl;
    cout << "Cost: RM" << stock.getCost() << endl;
    cout <<"Units on hand: " << stock.getUnits() << endl;
    // system("pause"); // Not available in Linux
    return 0;
}