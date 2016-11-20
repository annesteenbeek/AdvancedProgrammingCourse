//
// Created by anne on 19-11-16.
//
#include <iostream>
#include "GradeBook.h"
#include "Student.h"


using namespace std;

int main(){
    std::vector<float> grades1 {6.5, 8.5, 6};
    std::vector<float> grades2 {7, 8};
    std::vector<float> grades3 {9, 4.5, 8, 7};
    Student jan("jan", grades1);
    Student wolfgang("Wolfgang", grades2);
    Student michael("Michael", grades3);


    // Create pointer array
    const int nrStudents = 3; // pass array length to function
    Student *studentArray[nrStudents] = {&jan, &wolfgang, &michael};
    Student::printStudents(studentArray, nrStudents);

    cout << "Sorted students by Average: " << endl;
    GradeBook::sortPointerArrayByAverage(studentArray, nrStudents);
    Student::printStudents(studentArray, nrStudents);
}