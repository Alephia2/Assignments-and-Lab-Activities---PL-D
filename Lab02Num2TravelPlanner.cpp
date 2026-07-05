#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>

float get_distance () {
    float km;
    std::cout << "Enter Distance in Km: ";
       std::cin >> km;
return km;
}

float get_liters () {
    float liters;
       std::cout << "Enter Fuel Capacity of Car: ";
       std::cin >> liters;
return liters;
}

float get_price () {
    float price;
    std::cout << "Enter Price of Fuel per Liter: ";
    std::cin >> price;
return price; 
}

float convert_miles (float km) {
    float mi = km / 1.60934;
    return mi;
}

float total_fuel_needed (float mi, float liters) {
    float fullTanks1 = mi / 15;
return fullTanks1;
}

float num_fullTanks (float fullTanks1, float liters) {
     float fullTanks2 = fullTanks1 / liters;
return fullTanks2;
}

float remainder_fullTanks (float fullTanks1, float liters) {
    float fullTanks = std::fmod(fullTanks1, liters);
return fullTanks;
}

float get_fuelCost (float liters, float price) {
    float fuel_cost = liters * price;
    float rnd_fuelCost = std::round(fuel_cost * 100) / 100;
return rnd_fuelCost;
}

int main () {
    float km = get_distance ();
    float mi = convert_miles (km);
    float liters = get_liters ();
    float price = get_price ();
    float fullTanks1 =  total_fuel_needed (mi, liters);

    std::cout << "Number of Full Tanks Needed: " << num_fullTanks (fullTanks1, liters) << "\n";
    std::cout << "Remainder of full at the End: " << remainder_fullTanks (fullTanks1, liters) << "\n";
    std::cout << "Total cost of Fuel: " << get_fuelCost(liters, price) << "\n";
}

