#include <iostream.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

float get_distance () {
    float mi;
       cout << "Enter Distance in mi: ";
       cin >> mi;
return mi;
}

float get_liters () {
    float liters;
       cout << "Enter Fuel Capacity of Car: ";
       cin >> liters;
return liters;
}

float get_price () {
    float price;
       cout << "Enter Price of Fuel per Liter: ";
       cin >> price;
return price;
}

float convert_miles (float mi) {
    float km = mi * 1.60934;
    return km;
}

float total_fuel_needed (float mi) {
    float fullTanks1 = mi / 15;
return fullTanks1;
}

float num_fullTanks (float fullTanks1, float liters) {
     float fullTanks2 = fullTanks1 / liters;
return fullTanks2;
}

float remainder_fullTanks (double fullTanks1, double liters) {
    float fullTanks = fullTanks1 - floor((fullTanks1 / liters)) * liters;
return fullTanks;
}

float get_fuelCost (float price, float fullTanks1) {
    float fuel_cost = fullTanks1 * price;
    float rnd_fuelCost = floor((fuel_cost * 100)) + 0.5 / 100;
return rnd_fuelCost;
}

int main () {
    clrscr();
    float mi = get_distance ();
    float km = convert_miles (mi);
    float liters = get_liters ();
    float price = get_price ();
    float fullTanks1 =  total_fuel_needed (mi);
    float fullTanks2 = num_fullTanks (fullTanks1, liters);

    printf ("\n \n Distance in Km: %.2f \n", convert_miles (mi));
    printf ("Fuel Needed: %.2f \n", total_fuel_needed (mi));
    printf ("Full Tanks Needed: %.2f \n", num_fullTanks(fullTanks1, liters));
    printf ("Remainder of fuel %.2f \n", remainder_fullTanks(fullTanks1, liters));
    printf ("Total Cost of Fuel: %.2f ", get_fuelCost(price, fullTanks2));
    getch();
    return 0;
}

