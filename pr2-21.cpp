// James Fisher

#include <iostream>
using namespace std;
int main()
{
  double regular_wages;
  double base_pay_rate = 18.25, overtime_payrate=27.78;
  double regular_hours=40, overtime_hours;
  double total_wages;
  double overtime_wages;
  double work_hours = 50;
  
  regular_wages = regular_hours * base_pay_rate;
  overtime_hours = work_hours - regular_hours;
  overtime_wages = overtime_hours * overtime_payrate;
  total_wages = overtime_wages + regular_wages;
  cout << total_wages << endl;
}