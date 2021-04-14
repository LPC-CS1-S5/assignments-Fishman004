#include <iostream>
using namespace std;

void swapTwoValues(float, float);
void swapTwoValues(int, int);

int main(){

  int num1;
  int num2;
  float floa1;
  float floa2;
  cout << "Please enter two integers\n";
  cin >> num1 >> num2;
  cout << "Please enter two floats\n";
  cin >> floa1>>floa2;
  swapTwoValues(num1, num2);
  swapTwoValues(floa1, floa2);
}
void swapTwoValues(float f1, float f2){
  int n1;
  n1 = f1;
  f1 = f2;
  f2 = n1;
  cout << f1<< "\n" << f2 << "\n";
}
void swapTwoValues(int n1, int n2){
  int f1;
  f1 = n1;
  n1 = n2;
  n2 = f1;
  cout << n1<< "\n" << n2 << "\n";
}