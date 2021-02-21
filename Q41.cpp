#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int selection;
  double area;
  double height;
  double base;
  double radius;

  cout << "Geometry Calculator\n\n";
  cout << "1. Calculate the Area of a Circle\n";
  cout << "2. Calculate the Area of a Rectangle\n";
  cout << "3. Calculate the Area of a Triangle\n";
  cout << "4. Quit\n\n";
  cout << "Enter your choice (1-4): \n";

  cin >> selection;

  switch (selection){
    case 1:
      
      cout << "What is the radius?\n";
      cin >> radius;
      if (radius < 0){
        cout << "The radius cannot be negative\n";
      }else {
      area = (radius * radius) * 3.14159;
      cout << "The area of the circle is " << fixed << setprecision(4) << area << "\n";
      break;
      }
    case 2:
      cout << "What is the base and height?\n";
      cin >> base;
      cin >> height;
      if (height < 0 || base < 0 ){
        cout << "The base or height cannot be negative\n";
      }else {
        area = base * height;
      cout << "The area of the rectangle is " << fixed << setprecision(4) << area << "\n";
      break;
      }
      
    case 3:
      cout << "What is the base and the height?\n";
      cin >> base;
      cin >> height;
      if (height < 0 || base < 0 ){
        cout << "The base or height cannot be negative\n";
      }else {
      area = (0.5 * base) * height;
      cout << "The area of the triangle is " << fixed << setprecision(4) << area << "\n";
      break;
      }
    case 4:
      return 0;
    default :
      cout << "Invalid number\n";
  }





}