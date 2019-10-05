#include <iostream>
#include "StudentTestScores.h"

int main ()
{
    StudentTestScores student1 ("Ahmad Daniel", 3);
    student1.setTestScore(90, 0);
    student1.setTestScore(80, 1);
    student1.setTestScore(85, 2);

    StudentTestScores student2 ("Daniel Ahmad", 3);
    student2.setTestScore(70, 0);
    student2.setTestScore(64, 1);
    student2.setTestScore(55, 2);

    student2 = student1;

    for (int i = 0; i < student1.getNumTestScores(); ++i)
    {
        std::cout << student1.getTestScore(i) << std::endl;
        std::cout << student2.getTestScore(i) << std::endl;
    }

    return 0;
}