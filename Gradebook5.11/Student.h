//
// Created by anne on 19-11-16.
//
#include <string> // class GradeBook uses C++ standard string class
#include <vector>

#ifndef ADVANCEDPROGRAMMINGCOURSE_STUDENTS_H
#define ADVANCEDPROGRAMMINGCOURSE_STUDENTS_H


class Student {

public:
    Student(std::string name, std::vector<float> grades);
    std::vector<float> getGrades();
    std::string getName();
    float getAverage();
    static void printStudents(Student **students, int size);


private:
    std::string name;
    std::vector<float> grades;
};

#endif //ADVANCEDPROGRAMMINGCOURSE_STUDENTS_H
