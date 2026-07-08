#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

float get_point () {
    float a;
    cout << "Enter Coordinate: ";
    cin >> a;
    return a;
}

float get_distance (float x1,float x2, float y1, float y2) {
    float full_distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return full_distance;
}

void display_this (float x1, float x2, float y1, float y2, float full_distance){
    cout << "Distance: " << full_distance << "\n";
    printf ("x1: %.2f \n", x1);
    printf ("x2: %.2f \n", x2);
    printf ("y1: %.2f \n", y1);
    printf ("y2: %.2f \n", y2);

}

int main () {
    float x1, x2, y1, y2, full_distance;
    x1 = get_point();
    x2 = get_point();
    y1 = get_point();
    y2 = get_point();
    full_distance = get_distance ( x1, x2, y1, y2);
    display_this (x1, x2, y2, y1, full_distance);

return 0;
}
