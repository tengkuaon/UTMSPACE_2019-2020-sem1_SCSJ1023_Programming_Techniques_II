#include <iostream>
#include <iomanip>
#include "Sale.h"
using namespace std;

int main ()
{
    double cost;
    
    cout << "Harga asal Blanket adalah RM ";
    cin >> cost;

    Sale itemSale(cost);

    cout << fixed << showpoint << setprecision(2);

    cout << "Potongan untuk diskaun adalah RM" << itemSale.getDis() << endl;
    cout << "Harge selepas diskaun RM";
    cout << itemSale.getTotal() << endl;
    // system("pause"); // Not available in Linux
    return 0;
}