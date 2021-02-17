#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){
  srand ((unsigned) time (0));
  int Num1 = (rand() % 100);
  int Num2 = (rand() % 100);
  int Num3 = (rand() % 100);
  int averagenum = (Num1 + Num2 + Num3) / 3;
  cout << "Random number 1 is " << fixed << setprecision(5) << Num1 << "\n";
  cout << "Random number 2 is " << fixed << setprecision(5) << Num2 << "\n";
  cout << "Random number 3 is " << fixed << setprecision(5) << Num3 << "\n";
  cout << "The average of these numbers is " << fixed << setprecision(5) << averagenum << "\n";
}

// The code runs a random on a timer, creating a new number set each runtime. It then creates a random under 100 for each variable, and then writes it out. Each has setprecision of 5 but is an int so it is never displayed. 