#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int num1,num2,num3;
  cout << "Please type three numbers in order and it will be printed back from least to greatest" << "\n";
  cin >>num1>>num2>>num3;
  if (num1 > num2){
    if (num2 > num3){
      cout << num3 << "\n" <<num2 << "\n" <<num1 << "\n";
    }else {
      cout << num2 << "\n" <<num3 << "\n" <<num1 << "\n";
    }
    
  }
  if (num2 > num1){
    if (num3 > num1){
      if (num3 >num2){
        cout << num1 << "\n" <<num2 << "\n" <<num3 << "\n";
      }else { cout << num1 << "\n" <<num3 << "\n" <<num2 << "\n";
      }


    }else {cout << num3 << "\n" <<num1 << "\n" <<num2 << "\n";
    }

  }
  
}