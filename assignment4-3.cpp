#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int selection;
  cout <<"Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n";
  cout << "4. None of them!\n";
  cin >> selection;

  switch (selection){
    case 1 :
      cout << "Pi times radius squared\n";
      break;
    case 2 :
      cout << "Base times height\n";
      break;
    case 3 :
      cout << "Pi times radius squared times the height\n";
      break;
    case 4 :
      cout << "Okay, goodbye!\n";
      break;
    default :
      cout << "Invalid Number\n";
      return 0;

  }
}