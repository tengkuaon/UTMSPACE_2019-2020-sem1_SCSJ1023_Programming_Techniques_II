#include <iostream>
using namespace std;

const int TITLE_SIZE = 30;

class Books
{
    private:
        char title[TITLE_SIZE];
        float price;
    
    public:
        void getData ();
        void putData ();
};

void Books::getData () 
{
    cout << "Title:";
    // cin >> title;
    cin.ignore();
    cin.getline(title, TITLE_SIZE);
    cout << "Price:";
    cin >> price;
}

void Books::putData ()
{
    cout << "Title:" << title << "\n";
    cout << "Price:" << price << "\n";
}

const int SIZE = 3;

int main () 
{
    Books book[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Enter book details " << (i + 1) << "\n";
        book[i].getData();
    }

    for (int i = 0; i < SIZE; ++i)
    {
        cout << "\nBook " << (i + 1) << "\n";
        book[i].putData();
    }

    return 0;
}