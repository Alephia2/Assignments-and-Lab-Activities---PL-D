#include <conio.h>
#include <iostream>
#include <string>
#define standard_price 220

using namespace std;

void initial_display () {
    cout << "--Welcome!--\n";
    cout << "N/A - 0   Student - 1    Senior - 2 \n";
}

void ask_for_name ( char* name) {
    cout << "Name: ";
    cin >> name;
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

int ask_for_matinee_time () {
    int matinee;
    cout << "Matinee time (enter int): ";
    cin >> matinee;
    return matinee;
}

void ask_for_matinee_day (char* matinee_day) {
    cout << "AM or PM?: ";
    cin >> matinee_day;
}


int get_after_discount (int status, int age) {
   int discount = standard_price;
    if (status == 1 && age < 18) {
        discount = standard_price - 40;
    } else if (status == 2) {
        discount = standard_price -  60;
    } else if (status == 1) {
        discount = standard_price - 20;
    } else if (status == 0) {
        discount = standard_price;
    }
    return discount;
}

void paDisplayPo (char* name, int age, int matinee, char* matinee_day, int discount) {
    cout << "\n----- TICKET RECEIPT -----\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Time: " << matinee << " " << matinee_day << "\n";
    cout << "Total Price: Php " << discount << "\n";
    cout << "--------------------------\n\n";
}

char ask_try () {
    char try_again;
    cout << "Another Transaction? (y/n): ";
    cin >> try_again;
    return try_again;
}

int main () {
    char name[67], matinee_day[3];
    int age, status, discount;
    int matinee;
    char try_again;
    
    start:
    initial_display ();

    ask_for_name(name); 
    age = ask_for_age();
    status = ask_for_status();
    matinee = ask_for_matinee_time();
    ask_for_matinee_day(matinee_day);

    discount = get_after_discount (status, age);

    if (matinee < 5 && (matinee_day[0] == 'P' || matinee_day[0] == 'p') && (!status == 2)) {
        matinee = true;
        discount = discount - 40;
    }

paDisplayPo(name, age, matinee, matinee_day, discount);

    try_again = ask_try();
    if (try_again == 'y' || try_again == 'Y') {
        goto start;
    }

    
}