// James Fisher

#include <iostream>
using namespace std;
int main()
{
  double base_income = 6000;
  double percent1 = base_income * 0.05;
  double percent2 = base_income * 0.07;
  double percent3 = base_income * 0.1;
  
  cout << "If you put 5% away, you would gain $" << percent1 << endl;
  cout << "If you put 7% away, you would gain $" << percent2 << endl;
  cout << "If you put 10% away, you would gain $" << percent3 << endl;
}