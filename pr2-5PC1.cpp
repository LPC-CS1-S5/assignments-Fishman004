#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double mealcharge = 88.67;
  double tax = 0.0675 * mealcharge;
  double tip = 0.20 * (tax + mealcharge);
  double finalcost = tip + tax + mealcharge;
  
  
  cout << fixed << setprecision(2) << "Final Cost: " << finalcost << "\n";
  
  cout << fixed << setprecision(2) << "Meal Charge: " << mealcharge << "\n";
  cout << fixed << setprecision(2) << "Tip: " << tip << "\n";
  
  cout << fixed << setprecision(2) << "Tax: " << tax << endl;
  //

}