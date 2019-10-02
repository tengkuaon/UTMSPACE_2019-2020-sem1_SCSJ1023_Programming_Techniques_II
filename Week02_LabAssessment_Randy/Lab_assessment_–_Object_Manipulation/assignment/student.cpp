#include "student.h"

// -------
// Private
// -------

char Student::calculateGrade (float score)
{
    char letterGrade;

    if (score > 89) 
        letterGrade = 'A';
    else if (score > 79)
        letterGrade = 'B';
    else if (score > 69)
        letterGrade = 'C';
    else if (score > 59)
        letterGrade = 'D';
    else
        letterGrade = 'F';

    return letterGrade;
}



// ------
// Public
// ------

Student::Student ()
{
    sub1 = 0;
    sub2 = 0;
    sub3 = 0;        
}

Student::Student (float Sub1, float Sub2, float Sub3)
{
    sub1 = Sub1;
    sub2 = Sub2;
    sub3 = Sub3;    
}

void Student::setSub1 (float score)
{
    sub1 = score;
}

void Student::setSub2 (float score)
{
    sub2 = score;
}

void Student::setSub3 (float score)
{
    sub3 = score;
}

float Student::getSub1 ()
{
    return sub1;
}

float Student::getSub2 ()
{
    return sub2;
}

float Student::getSub3 ()
{
    return sub3;
}

float Student::getTotal ()
{
    return sub1 + sub2 + sub3;
}

float Student::getAverage ()
{
    return getTotal() / 3;
}

char Student::getGradeSub1 ()
{
    return calculateGrade(getSub1());
}

char Student::getGradeSub2 ()
{
    return calculateGrade(getSub2());
}

char Student::getGradeSub3 ()
{
    return calculateGrade(getSub3());
}

char Student::getGradeAverage ()
{
    return calculateGrade(getAverage());
}