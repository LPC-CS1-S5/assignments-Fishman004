#include <iostream>
#include <ctime>
using namespace std;

int main(){
  srand((unsigned) time(0));
  
  int largest;
  int numbers[5];
  numbers[0] = (rand() % 99);
  numbers[1] = (rand() % 99);
  numbers[2] = (rand() % 99);
  numbers[3] = (rand() % 99);
  numbers[4] = (rand() % 99);
  cout << numbers[0] << "\n";
  cout << numbers[1] << "\n";
  cout << numbers[2] << "\n";
  cout << numbers[3] << "\n";
  cout << numbers[4] << "\n";

  int largestNumber;
  int smallestNumber;
  
  largestNumber = numbers[0];
  smallestNumber = numbers[0];
  for (int i=0; i < 5; i++){
    if ( numbers[i] > largestNumber){
       largest= numbers[i];
    }
    if (numbers[i] < smallestNumber){
      smallestNumber = numbers[i];
    }

  }
  cout << "The smalles number is " << smallestNumber;
}