// Introductory11.cpp - displays ending balance
// Created/revised by <Cole Chapkowski> on <9/19/24>

#include <iostream>
using namespace std;

int main() 
{
  // declare variables
  double startingbalance = 0.0;
  double deposits = 0.0;
  double withdrawals = 0.0;
  double endingbalance = 0.0;
  // enter inputs
  cout << "Enter starting balance: ";
  cin >> startingbalance;
  cout << "Enter deposits: ";
  cin >> deposits;
  cout << "Enter withdrawals: ";
  cin >> withdrawals;
  // calculate and display ending balance
  endingbalance = startingbalance + deposits - withdrawals;
  cout << "Ending balance: " << endingbalance << endl;

  return 0;
} // end of main function