// James Fisher

#include <iostream>
using namespace std;

int main()
{
  double meal_cost;
  double aftertaxcost = meal_cost * 1.0675;
  double after_tip_cost = aftertaxcost * 1.2;
  
  cout << "After tax and adding a tip, the total cost will be $" << after_tip_cost << endl;
}