#include <iostream>
using namespace std;

int main(){
  int i;
  int j;
  bool isprime = true;
  cout << "Please enter a range for the prime numbers\n";
  cin >> i;
  cin >> j;
  while (i < j) {
    i++;
    isprime = true;
    //cout << "i = " << i << "\n";
    for (int n = 2; n <= i/2; n++){
      if (i % n ==0){
        isprime = false;
        break;
      }
    }
    if (isprime == true){
      cout << i << "\n";
    }
  }
  
}