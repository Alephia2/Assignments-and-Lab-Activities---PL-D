#include <iostream.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

float get_distance () {
    float km;
       cout << "Enter Distance in Km: ";
       cin >> km;
return km;
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

float convert_miles (float km) {
    float mi = km / 1.60934;
    return mi;
}

float total_fuel_needed (float mi) {
    float fullTanks1 = mi / 15;
return fullTanks1;
}

float num_fullTanks (float fullTanks1, float liters) {
     float fullTanks2 = fullTanks1 / liters;
return fullTanks2;
}

float remainder_fullTanks (int fullTanks1, int liters) {
    float fullTanks = fullTanks1 % liters;
return fullTanks;
}

float get_fuelCost (float liters, float price, float fullTanks2) {
    float fuel_cost = liters * price * fullTanks2;
    float rnd_fuelCost = (int)((fuel_cost * 100) + 0.5) / 100;
return rnd_fuelCost;
}

int main () {
    clrscr();
    float km = get_distance ();
    float mi = convert_miles (km);
    float liters = get_liters ();
    float price = get_price ();
    float fullTanks1 =  total_fuel_needed (mi);
    float fullTanks2 = num_fullTanks (fullTanks1, liters);

    printf ("\n \nFull Tanks Needed: %.2f \n", num_fullTanks(fullTanks1, liters));
    printf ("Remainder of fuelL Fulltanks %.2f \n", remainder_fullTanks(fullTanks1, liters));
    printf ("Total Cost of Fuel: %.2f ", get_fuelCost(liters, price, fullTanks2));
    getch();
    return 0;
}
