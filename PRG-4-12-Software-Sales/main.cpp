//
//  main.cpp
//  PRG-4-12-Software-Sales
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  A software company sells a package that retails for $99. Quantity discounts are given
//  according to the following table.
//  Quantity                        Discount
//  ----------------------------------------
//  10-19                           20%
//  20-49                           30%
//  50-99                           40%
//  100 or more                     50%
//
//  Write a program that asks for the number of units sold and computes the total cost of
//  the purchase.
//
//  Input validation: Make sure the number of units is greater than 0

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int intQuantity;
    
    float fltTotalCost;
    
    cout << "Please enter the number of items\n"
         << "you would like to purchase:\n";
    cin >> intQuantity;
    while(!cin || intQuantity < 0 || intQuantity > 1000000)
    {
        cout << "Please enter a quantity between 0 and 1,000,000:\n";
        cin.clear();
        cin.ignore();
        cin >> intQuantity;
    }
    
    if(intQuantity < 20)
    {
        fltTotalCost = (intQuantity * 99.00f) * 0.80f;
        cout << "Your total purchase cost is $"
             << setprecision(2) << fixed << fltTotalCost
             << ".\n";
    }
    else if(intQuantity >= 20 && intQuantity <= 49)
    {
        fltTotalCost = (intQuantity * 99.00f) * 0.70f;
        cout << "Your total purchase cost is $"
             << setprecision(2) << fixed << fltTotalCost
             << ".\n";
    }
    else if(intQuantity >= 50 && intQuantity <= 99)
    {
        fltTotalCost = (intQuantity * 99.00f) * 0.60f;
        cout << "Your total purchase cost is $"
             << setprecision(2) << fixed << fltTotalCost
             << ".\n";
    }
    else if(intQuantity >= 100)
    {
        fltTotalCost = (intQuantity * 99.00f) * 0.50f;
        cout << "Your total purchase cost is $"
             << setprecision(2) << fixed << fltTotalCost
             << ".\n";
    }
    else
    {
        cout << "ERROR CALCULATING COST\n";
    }
    
    return 0;
}






