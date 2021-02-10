#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double celcius;
  double fahrenheit;

  cout << "Please enter the temperature in Celcius" << "\n";
  cin >> celcius;
  fahrenheit = (1.8 * celcius) + 32;
  cout << celcius << " degrees in fahrenheit is " << fahrenheit << "\n";
}