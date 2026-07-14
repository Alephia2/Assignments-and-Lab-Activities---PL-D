#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

float initial_display () {
    cout << "---WELCOME TO GRADE CALCULATOR---" << "\n";
    cout << "Format for inputing grades: Score/total" << "\n";
}

float ask_for_name () {
    float name;
    cout << "Ener name of student: ";
    cin >> name;
    return name;
}

float ask_for_m1 () {
    float m1;
    cout << "Enter Midterm Quiz 1: ";
    cin >> m1;
    return m1;
}

float ask_for_m2 () {
    float m2;
    cout << "Enter Midterm Quiz 2: ";
    cin >> m2;
    return m2;
}

float ask_for_m3 () {
    float m3;
    cout << "Enter Midterm Quiz 3: ";
    cin >> m3;
    return m3;
}

float ask_for_lab1 () {
    float lab1;
    cout << "Enter lab 1: ";
    cin >> lab1;
    return lab1;
}

float ask_for_lab2 () {
    float lab2;
    cout << "Enter lab 2: ";
    cin >> lab2;
    return lab2;
}

float ask_for_lab3 () {
    float lab3;
    cout << "Enter lab 3: ";
    cin >> lab3;
    return lab3;
}

float ask_for_exam () {
    float exam;
    cout << "Enter Exam Score: ";
    cin >> exam;
    return exam;
}


float get_average_quiz (float m1, float m2, float m3){
    float average_quiz = (m1 + m2 + m3) / 3;
    return average_quiz;
}

float get_average_lab (float lab1, float lab2, float lab3) {
    float average_lab = (lab1 + lab2 + lab3);
    return average_lab;
}

float get_average_labQuizExam (float average_lab, float average_quiz, float exam) {
    float average_all = (average_lab + average_quiz + exam) / 3;
    return average_all;
}

void check_initial (float average_all){
if (average_all <= 0.6) {
    cout << "REMARK: 5.00 \n";
} else if (average_all >= 0.1) {
    cout << "ERROR: GRADE TOO HIGH\n";
}
}

float get_standing (float average_quiz, float average_lab) {
    float standing = (0.67 * average_quiz) + (0.33 * average_lab);
    return standing;
}

float get_grade (float standing, float exam) {
    float grade = (standing  * 0.67) + (exam * 0.33);
    return grade;
}


