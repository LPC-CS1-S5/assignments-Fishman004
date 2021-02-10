#include <iostream>
#include <ctime>
using namespace std;

int main(){
  srand((unsigned) time(0));
  int Num1 = (rand() % 100);
  int Num2 = (rand() % 100);
  int Num3 = (rand() % 100);
  int averagenum = (Num1 + Num2 + Num3) / 3;

  cout << "Random number 1 is " << Num1 << "\n";
  cout << "Random number 2 is " << Num2 << "\n";
  cout << "Random number 3 is " << Num3 << "\n";
  cout << "The average of these is " << averagenum << "\n";
}