#ifndef STUDENT_H
#define STUDENT_H

class Student
{
    private:
        float sub1, sub2, sub3;
        
        char calculateGrade (float);

    public:
        Student ();
        Student (float, float, float);

        void setSub1 (float);
        void setSub2 (float);
        void setSub3 (float);

        float getSub1 ();
        float getSub2 ();
        float getSub3 ();

        float getTotal ();
        float getAverage ();

        char getGradeSub1 ();
        char getGradeSub2 ();
        char getGradeSub3 ();
        char getGradeAverage ();
};

#endif