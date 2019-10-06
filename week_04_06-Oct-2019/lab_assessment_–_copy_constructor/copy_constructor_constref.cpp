#include <iostream>
using namespace std;

class Test
{
    public:
        Test (const Test &t) 
        {

        }

        Test () 
        {

        }
};

Test fun ()
{
    cout << "fun() Called \n";
    Test t;
    return t;
}

int main ()
{
    Test t1;
    Test t2 = fun();
    return 0;
}