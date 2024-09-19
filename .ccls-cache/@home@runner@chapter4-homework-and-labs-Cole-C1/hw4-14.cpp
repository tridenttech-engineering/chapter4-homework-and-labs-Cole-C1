// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <Cole Chapkowski> on <9/19/24>

#include <iostream>
using namespace std;

int main() {
  // declare variables
  double small = 0.0;
  double medium = 0.0;
  double large = 0.0;
  double family = 0.0;
  int total = 0;
  double smallpercent = 0.0;
  double mediumpercent=0.0;
  double largepercent=0.0;
  double familypercent=0.0;
  // enter input items
  cout << "Small: ";
  cin >> small;
  cout << "Medium: ";
  cin >> medium;
  cout << "Large: ";
  cin >> large;
  cout << "Family: ";
  cin >> family;
  // calculate and display total
  total = small + medium + large + family;
  cout << "total: " << total << endl;
  // calculate and display percentages
  smallpercent = (small / total)*100;
  mediumpercent = (medium / total)*100;
  largepercent = (large / total)*100;
  familypercent = (family / total)*100;
  cout << "small percent: " << smallpercent << endl;
  cout << "medium percent: " << mediumpercent << endl;
  cout << "large percent: " << largepercent << endl;
  cout << "family percent: " << familypercent << endl;

  
  return 0;
} // end of main function