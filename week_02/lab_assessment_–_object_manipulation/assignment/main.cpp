#include <iostream>
#include <iomanip>
#include "student.h"

int main ()
{
    const int NUM_OF_STUDENTS = 3;
    Student student[NUM_OF_STUDENTS];

    std::cout << "Enter the result of 3 test of TP2, OOP, and Web Programming for 3 students: " << std::endl << std::endl;
    
    for (int i = 0; i < NUM_OF_STUDENTS; ++i)
    {
        float score;

        std::cout << "Student #" << i + 1 << " TP2 : ";
        std::cin >> score;
        student[i].setSub1(score);

        std::cout << "Student #" << i + 1 << " OOP : ";
        std::cin >> score;
        student[i].setSub2(score);

        std::cout << "Student #" << i + 1 << " Web Programming : ";
        std::cin >> score;
        student[i].setSub3(score);

        std::cout << std::setprecision(0) << std::fixed;

        std::cout << "Total Score : ";
        std::cout << student[i].getTotal() << std::endl;
        std::cout << "Average : ";
        std::cout << student[i].getAverage() << std::endl;
        std::cout << "Grade : " << student[i].getGradeAverage() << std::endl;

        std::cout << std::endl;
    }

    return 0;
}