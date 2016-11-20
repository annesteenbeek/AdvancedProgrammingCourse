//
// Created by anne on 19-11-16.
//


#include <vector>
#include "Student.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

Student::Student(string studentName, std::vector<float> studentGrades){
    name = studentName;
    grades = studentGrades;
}

float Student::getAverage(){
    // Calculate the average for a given vector of grades
    unsigned long int size = grades.size();
    float sum = 0;

    for(int i = 0; i < size; i++){
        sum += grades[i];
    }
    float average = sum/size;
    return average;
}

std::vector<float> Student::getGrades(){
    // Return pointer to grades array
    return grades;
}

string Student::getName(){
    return name;
}

void Student::printStudents(Student *students[], int size){
    const char separator    = ' ';
    const int nameWidth     = 10;
    const int numWidth      = 5;

    // First get the maximum nr of grades for students
    unsigned long int maxGrades = 0;
    for (int i = 0; i < size; i++) {
        std::vector<float> tmpGrades = students[i] -> getGrades();
        maxGrades = std::max(maxGrades, tmpGrades.size());
    }

    for (int i = 0; i < size; i++) {
        // format into table style
        cout << left << setw(nameWidth) << setfill(separator) << students[i] -> getName();
        std::vector<float> tmpGrades = students[i] -> getGrades();
        for(int j = 0; j < maxGrades; j++) {
            // Enter empty grade if student has less grades then the maximum
            if (tmpGrades.size() > j) {
                cout << left << setw(numWidth) << setfill(separator) << tmpGrades[j];
            } else {
                cout << left << setw(numWidth) << setfill(separator) << " ";
            }
        }
        // print the average for the student
        cout << left << setw(nameWidth) << setfill(separator) << "Average: ";
        cout << left << setw(numWidth) << setfill(separator) << students[i] -> getAverage();


        cout << endl;
    }

}