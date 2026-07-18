#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

void initial_display () {
    cout << "---WELCOME TO GRADE CALCULATOR---" << "\n";
    cout << "Format for inputing grades: Score/total" << "\n";
    cout << "SINGLE NAME ONLY" << "\n\n";
}

string ask_for_name () {
    string name;
    cout << "Enter name of student: ";
    cin >> name;
    return name;
}

float ask_for_m1 () {
    float m1;
    cout << "Score Midterm Quiz 1: ";
    cin >> m1;
    return m1;
}

float ask_for_m1_total () {
    float m1_total;
    cout << "Total Midterm Quiz 1: ";
    cin >> m1_total;
    return m1_total;
}

float ask_for_m2 () {
    float m2;
    cout << "Score Midterm Quiz 2: ";
    cin >> m2;
    return m2;
}

float ask_for_m2_total () {
    float m2_total;
    cout << "Total Midterm Quiz 2: ";
    cin >> m2_total;
    return m2_total;
}

float ask_for_m3 () {
    float m3;
    cout << "Score Midterm Quiz 3: ";
    cin >> m3;
    return m3;
}

float ask_for_m3_total () {
    float m3_total;
    cout << "Total Midterm Quiz 3: ";
    cin >> m3_total;
    return m3_total;
}

float ask_for_lab1 () {
    float lab1;
    cout << "Score lab 1: ";
    cin >> lab1;
    return lab1;
}

float ask_for_lab1_total () {
    float lab1_total;
    cout << "Total lab 1: ";
    cin >> lab1_total;
    return lab1_total;
}

float ask_for_lab2 () {
    float lab2;
    cout << "Score lab 2: ";
    cin >> lab2;
    return lab2;
}

float ask_for_lab2_total () {
    float lab2_total;
    cout << "Total lab 2: ";
    cin >> lab2_total;
    return lab2_total;
}

float ask_for_lab3 () {
    float lab3;
    cout << "Score lab 3: ";
    cin >> lab3;
    return lab3;
}

float ask_for_lab3_total () {
    float lab3_total;
    cout << "Total lab 3: ";
    cin >> lab3_total;
    return lab3_total;
}

float ask_for_exam () {
    float exam;
    cout << "Score Exam: ";
    cin >> exam;
    return exam;
}

float ask_for_exam_total () {
    float exam_total;
    cout << "Total Exam Score: ";
    cin >> exam_total;
    return exam_total;
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

// get summation
float get_summation_quiz (float m1, float m2, float m3) {
    float summation_quiz = m1 + m2 + m3;
    return summation_quiz;
}

float get_summation_lab (float lab1, float lab2, float lab3, float exam) {
    float summation_lab = lab1 + lab2 + lab3 + exam;
    return summation_lab;
}

float get_both_summation (float summation_quiz, float summation_lab) {
    float summation_both = summation_quiz +summation_lab;
    return summation_both;
}

//summation of total
float get_summation_quiz_total (float m1_total, float m2_total, float m3_total) {
    float summation_quiz_total = m1_total + m2_total + m3_total;
    return summation_quiz_total;
}

float get_summation_lab_total (float lab1_total, float lab2_total, float lab3_total, float exam_total) {
    float summation_lab_total = lab1_total + lab2_total + lab3_total + exam_total;
    return summation_lab_total;
}

float get_both_summation_total (float summation_quiz_total, float summation_lab_total) {
    float summation_both_total = summation_quiz_total + summation_lab_total;
    return summation_both_total;
}

//logic of both summations
float get_logic (float summation_both, float summation_both_total) {
    float final_percentage = summation_both / summation_both_total;
    return final_percentage;
}

void check_initial (float final_percentage) {
if (final_percentage <= 0.6) {
    cout << "REMARK: 5.00 \n";
    bool x = true;
} else if (final_percentage >= 0.1) {
    cout << "ERROR: GRADE TOO HIGH\n";
    bool x = false;
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

float get_gpa (float grade, string name) {
    if (grade >= 98) {
        cout << "---PASSED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 1.00 \n";
        cout << "Grade: " << grade;
    } else if (grade >=95) {
        cout << "---PASSED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 1.25 \n";
        cout << "Grade: " << grade;
    } else if (grade >=92) {
        cout << "---PASSED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 1.50 \n";
        cout << "Grade: " << grade;
    } else if (grade >= 89) {
        cout << "---PASSED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 1.75 \n";
        cout << "Grade: " << grade;
    } else if (grade >= 85) {
        cout << "---PASSED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 2.00 \n";
        cout << "Grade: " << grade;
    } else if (grade >= 83) {
        cout << "---PASSED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 2.25 \n";
        cout << "Grade: " << grade;
    } else if (grade >= 80) {
        cout << "---PASSED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 2.50 \n";
        cout << "Grade: " << grade;
    } else if (grade >= 77) {
        cout << "---PASSED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 2.75 \n";
        cout << "Grade: " << grade;
    } else if (grade >= 75) {
        cout << "---FAILED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 3.00 \n";
        cout << "Grade: " << grade;
    } else if (grade >= 72) {
        cout << "---FAILED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 4.00 \n";
        cout << "Grade: " << grade;
    } else {
        cout << "---FAILED---\n";
        cout << "Name: " << name << "\n";
        cout << "Remark: 5.00 \n";
        cout << "Grade: " << grade;
    }
}

int main () {
    string name;
    float m1, m1_total, m2, m2_total, m3, m3_total, lab1, lab1_total, lab2, lab2_total, lab3, lab3_total, exam, exam_total;
    float summation_quiz, summation_lab, summation_both, summation_quiz_total, summation_lab_total, summation_both_total, final_percentage;
    float average_quiz, average_lab, average_all, x;

    initial_display ();
    name = ask_for_name();
    m1 = ask_for_m1();
    m1_total = ask_for_m1_total ();
    m2 = ask_for_m2();
    m2_total = ask_for_m2_total ();
    m3 = ask_for_m3();
    m3_total = ask_for_m3_total ();
    lab1 = ask_for_lab1();
    lab1_total = ask_for_lab1_total ();
    lab2 = ask_for_lab2();
    lab2_total = ask_for_lab2_total ();
    lab3 = ask_for_lab2();
    lab3_total = ask_for_lab3_total ();
    exam = ask_for_exam();
    exam_total = ask_for_exam_total();

    summation_quiz = get_summation_quiz(m1, m2, m3);
    summation_lab = get_summation_lab(lab1, lab2, lab3, exam);
    summation_both = get_both_summation(summation_quiz, summation_lab);
    summation_quiz_total = get_summation_quiz_total (m1_total, m2_total, m3_total);
    summation_lab_total = get_summation_lab_total (lab1_total, lab2_total, lab3_total,exam_total);
    summation_both_total = get_both_summation_total (summation_quiz_total, summation_lab_total);
    final_percentage = get_logic(summation_both, summation_both_total);

    average_quiz = get_average_quiz(m1, m2, m3);
    average_lab = get_average_lab (lab1, lab2, lab3);
    average_all = get_average_labQuizExam(average_lab, average_quiz, exam);

    check_initial (average_all);
    if (x = true) {
        float standing = get_standing (average_quiz, average_lab);
        float grade = get_grade (standing, exam);
        get_gpa (grade, name);
    }
}
