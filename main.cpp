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
    double dollars,euros,kilos,dollarsPerPound,eurosPerKilo;
    
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
    kilos =  ((double)pounds + (double)ounces / 16) * 0.4536; // 1 lb = 0.4536 kg
    euros = dollars * 0.6938; // US$1.00 = €0.6938
    dollarsPerPound = dollars / ((double)pounds + (double)ounces / 16);
    eurosPerKilo = euros / kilos;
    
    // output conversions as $/lb and €/kg
    cout << "The price of this item is $" << fixed << setprecision(2) << dollarsPerPound << " per pound." << endl;
    cout << "This is equivalent to €" << fixed << setprecision(2) << eurosPerKilo << " per kilo." << endl;
    cout << "Thank you for using Brewster Mitchell's Conversion Program.";
    
    // OS-agnostic means of pausing console
    cout << "Press RETURN to exit.";
    cin.get(); // clear input buffer
    cin.ignore();    
    return 0;
}
