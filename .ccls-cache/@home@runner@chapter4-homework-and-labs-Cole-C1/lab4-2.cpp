//Lab4-2.cpp - displays a salesperson's commission
// Created/revised by <Cole Chapkowski> on <9/19/24>
#include <iostream>
using namespace std;
int main()
{
//Declaration of Variables
  const double Comm_Rate=0.1;
  double sales=0.0;
  double commission=0.0;

  //Enter Inputs
  cout << "sales amount: ";
cin >> sales;

  //Calculate and display
  commission=sales * Comm_Rate;
    cout << "commission: " << commission << endl;

  
  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/