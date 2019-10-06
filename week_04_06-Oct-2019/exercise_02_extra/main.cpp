#include <iostream>
#include "Sbt.h"

std::istream &operator>> (std::istream &input, Sbt &rhs);
std::ostream &operator<< (std::ostream &output, const Sbt &rhs);
void checkForEqualArrays(Sbt sbt1, Sbt sbt2);

int main ()
{
    Sbt Num1(5);
    Sbt Num2(10);

    std::cout << "Size of array Num1: " << Num1.getArrLength() << "\n";
    std::cout << "After initialization, contents of array Num1:\n";
    std::cout << Num1 << "\n";

    std::cout << "Size of array Num2: " << Num2.getArrLength() << "\n";
    std::cout << "After initialization, contents of array Num2:\n";
    std::cout << Num2 << "\n";

    std::cout << "Enter 15 numbers:\n";
    std::cin >> Num1 >> Num2;

    std::cout << "\nAfter input, contents of array Num1:\n";
    std::cout << Num1 << "\n";

    std::cout << "After input, contents of array Num2:\n";
    std::cout << Num2 << "\n";
    
    checkForEqualArrays(Num1, Num2);

    std::cout << "Assigning Num2 to Num1...\n\n";

    Num2 = Num1;

    std::cout << "After assigning, contents of array Num1:\n";
    std::cout << Num1 << "\n";

    std::cout << "After assigning, contents of array Num2:\n";
    std::cout << Num2 << "\n";

    checkForEqualArrays(Num1, Num2);

    return 0;
}

std::istream &operator>> (std::istream &input, Sbt &rhs)
{
    for (int i = 0; i < rhs.arr_length; i++)
    {
        input >> rhs.arr[i];
    }

    return input;
};

std::ostream &operator<< (std::ostream &output, const Sbt &rhs)
{
    for (int i = 0; i < rhs.arr_length; ++i)
    {                
        output << " " << rhs.arr[i] << " ";
        
        if ((i + 1) % 5 == 0)
        {
            std::cout << "\n";
        }
    }

    return output;
};

void checkForEqualArrays(Sbt sbt1, Sbt sbt2)
{
    std::cout << "Evaluating Num1 == Num2... Num1 and Num2 are ";
    std::cout << (sbt1 == sbt2 ? "equal!" : "not equal!");        
    std::cout << "\nThey " 
              << (sbt1.getArrLength() != sbt2.getArrLength() ? "don't " : "")
              << "have the same number of elements!";    
    std::cout << "\n\n";
}