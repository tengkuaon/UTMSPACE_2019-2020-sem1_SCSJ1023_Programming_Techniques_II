#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    float payment, pay, total, balance, price;
    int choice = 0;

    cout << "#############################" << endl;
    cout << "\n* DVDs VENDING MACHIINE \t*\n";
    cout << "* ----------------------- *" << endl;
    cout << "* [1] HARRY POTTER\t* \n";
    cout << "* [2] INK HEART\t\t* \n";
    cout << "* [3] TRANSFORMER II\t* \n";
    cout << "* [4] BEDTIME STORIES\t* \n";
    cout << "* [5] No thank you!\t* \n";
    cout << "* ----------------------- *" << endl;
    cout << "#############################" << endl;

    while (choice != 5)
    {
        do
        {
            cout << "\nPlease enter your choice [1-5]: ";
            cin >> choice;
            if (choice < 0 || choice > 5)
            {
                cout << "\nInvalid Option!";
                cout << "\nPlease re-enter your choice [1-5]: ";
                cin >> choice;
            }
        } while (choice < 1 || choice > 5);

        switch (choice)
        {
            case 1:
                price = 20.00;
                total += price;
                cout << "\nHARRY POTTER Price RM20.00" << endl;
                break;

            case 2:
                price = 23.00;
                total += price;
                cout << "\nINK HEART Price 23.00" << endl;                
                break;
            
            case 3:
                price = 10.00;
                total += price;
                cout << "\nTRANSFORMER II Price RM10.00" << endl;                
                break;
            
            case 4:
                price = 20.00;
                total += price;
                cout << "\nBEDTIME STORIES Price RM20.00" << endl;
                break;

            default: cout << "\nNo Thank You." << endl;
        }
    }

    cout << "\nTotal is : RM" << total << endl;

    cout << "\nPlease enter your payment: RM";
    cin >> payment;
    if (payment > total)
    {
        balance = payment - total;
        cout << "\nPlease take your balance: RM" << balance << endl;
        cout << "\nThank you.." << endl;
    }
    else if (payment < total)
    {
        do 
        {
            cout << "\nSorry, payment is not enough..";
            cout << "\nPlease enter more payment: RM";
            cin >> pay;
            payment += pay;            
        } while (payment < total);

        balance = payment - total;
        cout << "\nPlease take your balance: RM" << balance << endl;
        cout << "\nThank you.." << endl;
    }
    else
    {
        cout << "\nThank you.." << endl;
    }
    
    // system("pause"); // Not available on Linux
    return 0;
}