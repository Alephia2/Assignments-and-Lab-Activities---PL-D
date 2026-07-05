#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

 double ask_for_value () {
    
    double yrd;
    cout << "Enter Length in Yards: ";
    cin >> yrd;
    return yrd;
}

float get_inches (double yrd) {
    float in = yrd * 36;
    return in;
}

float get_cm (double yrd) {
    float cm = yrd * 91.44;
    return cm;
}

double get_mm (double yrd) {
    double mm = yrd * 914.4;
    return mm;
}

double get_m (double yrd) {
    double m = yrd * 0.9144;
    return m;
}

double get_km (double yrd) {
    double km = yrd * 0.0009144;
    return km;
}


double get_mi (double yrd) {
    double mi = yrd * 0.000568182;
    return mi;
}

double get_ft (double yrd) {
    double ft = yrd * 3;
    return ft;
}

int main () {
    double yrd = ask_for_value ();
    cout << fixed << setprecision(2) <<"Inches: " << get_inches (yrd) << "\n" << "Centimeter: " << get_cm (yrd) << "\n";
    cout << "Milimeter: " << get_mm (yrd) << "\n" << "Meter: " << get_m (yrd) << "\n";
    cout << defaultfloat << "Kilometer: " << get_km (yrd) << "\n" << "Miles: " << get_mi (yrd) << "\n";
    cout << "Feet: " << get_ft (yrd) << "\n"; 
}
