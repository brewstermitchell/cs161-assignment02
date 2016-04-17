// CS161 Assignment 02 - Conversion Program (main.cpp) 
// Program computes prices ($/lb, €/kg) for input weight (Imperial) and total price (US$).
// (c) Brewster Mitchell 2016
// April 16, 2016
// CS 161 PCC
// Sources: None

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //init local variables
    int pounds, ounces;
    double dollars,euros,kilos,ouncesToPounds,totalPounds,dollarsPerPound,eurosPerKilo;
    
    //dialog with user. Get weight and price of item (in pounds/oz and USD)
    cout << "Welcome to Brewster Mitchell's Conversion Program." << endl;
    cout << "What is the weight of your item in pounds and ounces?" << endl;
    cout << "Pounds: ";
    cin >> pounds;
    cout << "Ounces: ";
    cin >> ounces;
    cout << "What is the price in dollars and cents?: $";
    cin >> dollars;
    
    //do conversions
    totalPounds = (double)pounds + (double)ounces / 16; // convert oz to lb (1lb = 16oz) and add to lbs
    kilos = totalPounds * 0.4536; // 1 lb = 0.4536 kg
    euros = dollars * 0.6938; // US$1.00 = €0.6938
    dollarsPerPound = dollars / totalPounds;
    eurosPerKilo = euros / kilos;
    
    // output conversions as $/lb and €/kg
    cout << "The price of this item is $" << fixed << setprecision(2) << dollarsPerPound << " per pound." << endl;
    cout << "This is equivalent to €" << fixed << setprecision(2) << eurosPerKilo << " per kilo." << endl;
    cout << "Thank you for using Brewster Mitchell's Conversion Program.";
    return 0;
}
