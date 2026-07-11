#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#define gravity 332.17

using namespace std;

float ask_for_distance (float distance) {
    cout << "Enter distance in feet: ";
    cin >> distance;
    return distance;
}

float ask_for_velocity (float velocity) {
    cout << "Enter velocity in f/s: ";
    cin >> velocity;
    return velocity;
}

float ask_for_angle (float angle_in_degrees) {
    cout << "Enter angle in degrees: ";
    cin >> angle_in_degrees;
    return angle_in_degrees;
}

float get_angle_in_radians (float angle_in_degrees) {
    float angle_in_radians = angle_in_degrees * (M_PI / 180);
    return angle_in_radians;
}

float get_flight_time (float distance, float velocity, float angle_in_radians) {
    float time = distance / (velocity * cos(angle_in_radians));
    return time;
}

float get_max_height (float velocity, float angle_in_radians, float time) {
    float max_height = (velocity * sin(angle_in_radians) - (-gravity * pow(time, 2))) / 2;
    return max_height;
}

void display_results (float distance, float velocity, float angle_in_degrees, float angle_in_radians, float time, float max_height) {
    cout << "\n\n" << "Distance: " << distance << " feet" << endl;
    cout << "Velocity: " << velocity << " f/s" << endl;
    cout << "Angle: " << angle_in_degrees << " degrees" << endl;
    cout << "Angle in radians: " << angle_in_radians << endl;
    cout << "Flight time: " << time << " seconds" << endl;
    cout << "Maximum height: " << max_height << " feet" << endl;
}

int main () {
    //clrscr ();
    float distance, velocity, angle_in_degrees, angle_in_radians, time, max_height;

    distance = ask_for_distance (distance);
    velocity = ask_for_velocity (velocity);
    angle_in_degrees = ask_for_angle (angle_in_degrees);
    angle_in_radians = get_angle_in_radians (angle_in_degrees);
    time = get_flight_time (distance, velocity, angle_in_radians);
    max_height = get_max_height (velocity, angle_in_radians, time);

    display_results (distance, velocity, angle_in_degrees, angle_in_radians, time, max_height);

    getch();
    return 0;
}