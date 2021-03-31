#include <iostream>
using namespace std;

int evensumGet(int);
int oddsumGet(int);
int num1;
int num2;
int main(){
  int evenSum=0,oddSum=0;
  int input;

  do {

    cout << "Enter your input \n";
    cin >> input;
    if (input == -1){
      break;
    }else if (input % 2 == 0){
      evenSum= evensumGet(input);
    }
    else {
      
      oddSum = oddsumGet(input);
    }
  }while (1);
  cout << oddSum << ":The summation of all Odd inputs\n";
  cout << evenSum << ":The summation of all Even inputs\n";


}
int evensumGet(int n1){
  
  num1 = num1 + n1;
  return num1;
}
int oddsumGet(int n2){
  
  num2 = num2 + n2; 
  return num2;
}