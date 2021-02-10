//James Fisher
#include <iostream>
using namespace std;

int main(){

  int num1,num2,num3;
  cout << "Please type 3 numbers" << endl;
  cin >> num1 >> num2 >> num3;

  if (num1 < num2){
    if (num1 < num3){
      cout << num1 << " is the smallest number";

    }
    else {
      cout << num3 << "is the smallest number";
    }
  } else {
    if (num2 < num3){
      cout << num2 << " is the smallest number";
    } else {
      cout << num3 << " is the smallest number";
    }

  }

}