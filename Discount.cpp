#include <conio.h>
#include <math.h>
#include <iostream>
#include <string>
#define standard_price 220

using namespace std;

void initial_display () {
    cout << "--Welcome!--\n";
    cout << "N/A - 0   Student - 1    Senior - 2 \n";
}

string ask_for_name () {
    string name;
    cout << "Name: ";
    cin >> name;
    return name;
}

int ask_for_status () {
    int status;
    cout << "Plese Enter based on the discount: ";
    cin >> status;
    return status;
}

int ask_for_age () {
    int age;
    cout << "Age: ";
    cin >> age;
    return age;
}

int ask_for_matinee () {
    int matinee;
    cout << "Is the movie showing before 5pm, matinee (1 = yes, 0 = no): ";
    cin >> matinee;
    return matinee;
}

int get_after_discount (int status, int age) {
   int discount;
    if (status == 1 && age < 18) {
        discount = standard_price - 40;
    } else if (status == 2) {
        discount = standard_price -  60;
    } else if (status == 1) {
        discount = standard_price - 20;
    }
    return discount;
}

char ask_try () {
    char try_again;
    cout << "Another Transaction? (y/n): ";
    cin >> try_again;
    return try_again;
}

int main () {
    string name;
    int age, status, discount;
    int matinee;
    char try_again;
    
    start:
    name = ask_for_name ();
    age = ask_for_age ();
    status = ask_for_status ();
    matinee = ask_for_matinee();

    discount = get_after_discount (status, age);

    if (matinee = 1 && status = 2) {
        matinee = true;
        discount - 40;
    }

    if (try_again == 'y' || try_again == 'Y')
}