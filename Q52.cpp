#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;
  int exp;
  int num1;

  cout << "What number would you like, and what exponent would you like it raised to?\n";
  cin >> n;
  cin >> exp;
  num1 = n;


  for (int i = exp; i > 1 ; i--){
    num1 = num1 * n;
  }
  cout << "Final answer: " << num1;
}