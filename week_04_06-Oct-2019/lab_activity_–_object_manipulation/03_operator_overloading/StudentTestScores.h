#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H
#include <string>
using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
    private:
        string studentName;
        double *testScores;
        int numTestScores;
        
        void createTestScoresArray (int size)
        {
            numTestScores = size;
            testScores = new double [size];
        }

    public:
        // StudentTestScores (const StudentTestScores &sts)
        // {
        //     studentName = sts.studentName;
        //     createTestScoresArray(sts.numTestScores);
        //     for (int i = 0; i < sts.numTestScores; ++i)
        //     {
        //         testScores[i] = sts.testScores[i];
        //     }
        // }

        StudentTestScores (string name, int numScores)
        {            
            studentName = name;
            createTestScoresArray(numScores);
            for (int i = 0; i < numScores; ++i)
            {
                testScores[i] = DEFAULT_SCORE;
            }
        }

        // void operator= (const StudentTestScores &right)
        // {
        //     delete [] testScores;
        //     studentName = right.studentName;
        //     numTestScores = right.numTestScores;
        //     testScores = new double [numTestScores];
        //     for (int i = 0; i < numTestScores; ++i)
        //     {
        //         testScores[i] = right.testScores[i];
        //     }
        // }

        // const StudentTestScores operator= (const StudentTestScores &right)
        // {
        //     delete [] testScores;
        //     studentName = right.studentName;
        //     numTestScores = right.numTestScores;
        //     testScores = new double [numTestScores];
        //     for (int i = 0; i < numTestScores; ++i)
        //     {
        //         testScores[i] = right.testScores[i];
        //     }
        //     return *this;
        // }

        const StudentTestScores operator= (const StudentTestScores &right)
        {
            delete [] testScores;
            studentName = right.studentName;
            numTestScores = right.numTestScores;
            
            testScores = new double [numTestScores];
            for (int i = 0; i < numTestScores; ++i)
            {
                testScores[i] = right.testScores[i];
            }
            return *this;
        }

        ~StudentTestScores ()
        {
            delete [] testScores;
        }

        void setTestScore (double score, int index)
        {
            testScores[index] = score;
        }

        void setStudentName (string name)
        {   
            studentName = name;
        }

        string getStudentName () const
        {
            return studentName;
        }   

        int getNumTestScores () const
        {
            return numTestScores;
        }

        double getTestScore (int index) const
        {
            return testScores[index];
        }
};


#endif