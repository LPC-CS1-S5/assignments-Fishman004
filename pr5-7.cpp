#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double num1;
  double num2 = 2;
  double num3 = 0.5;
  cout << "What exponent would you like to use?\n";
  cin >> num1;
  if (num1 > 0){
    num1 = num1 - 1;
  while (num1 > 0) {
    num1 = num1 - 1;
    num2 = num2 * 2;

  }
  cout << num2 << " is the answer";
  }else if (num1 < 0) {
    num1 = num1 +1;
  while (num1 < 0){
    num1 = num1 + 1;
    num3 = num3 / 2;
  }
  cout << num3 << " is the answer";
  }
}