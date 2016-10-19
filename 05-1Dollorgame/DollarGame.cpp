/**
* Class: CS 110A
* Description:
 1. You can enter the number of pennies, nickels, dimes and quarters.
 2. If the total value of the coins entered is equal to one dollar, the program will congratulates you for winning the game.
 3. Otherwise, the program will let you know the amount entered was more than or less than one dollar.

* Due Date: Sep/28/2015
* Name: Minho Cha
* File Name: DollarGame.cpp
* Assignment #5
*/



#include <iostream>
using namespace std;

int main()
{
   const int penny=1, nickel=5, dime=10, quarter=25; 
   int quantity1, quantity2, quantity3, quantity4, price1, price2, price3, price4;


   cout << "\nLet's play a change-counting game." << endl;
   cout << "Enter the number of coins needed to make exactly one dollar." << endl;


   cout << "\nEnter the number of pennies: ";
   cin >> quantity1;
   cout << "Enter the number of nickels: ";
   cin >> quantity2;
   cout << "Enter the number of dimes: ";
   cin >> quantity3;
   cout << "Enter the number of quarters: ";
   cin >> quantity4;

   price1= quantity1*penny;
   price2= quantity2*nickel;
   price3= quantity3*dime;
   price4= quantity4*quarter;


   if ( price1+price2+price3+price4 == 100)
    cout << "\nCongratulations!" << " You win!" << endl;


   else if (price1+price2+price3+price4 > 100)
    cout << "\nSorry, that's more than one dollar." << endl;

   else
    cout << "\nSorry, that's less than one dollar." << endl;

   cout << "\nProgrammed by Minho Cha" << endl;

  return 0;

}

