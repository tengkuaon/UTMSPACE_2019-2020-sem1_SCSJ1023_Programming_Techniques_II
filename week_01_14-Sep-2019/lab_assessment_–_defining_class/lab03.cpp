#include <iostream>
using namespace std;

class Demo 
{
    public:
        Demo();
};

Demo::Demo()
{
    cout << "Welcome to the constructor!\n";
}

int main()
{
    cout << "This is displayed before the object is created\n\n";
    Demo demoObject;
    cout << "\nThis is displayed after the object is created.\n";
    return 0;
}