#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double num1 = 28;
  double num2 = 32;
  double num3 = 37;
  double num4 = 24;
  double num5 = 33;

  double sum = num1 + num2 + num3 + num4 + num5;

  double average = sum / 5;

  cout << fixed << setprecision(3) << "Sum: " << sum << "\n";
  cout << fixed << setprecision(3) << "Average: " << average << endl;


}