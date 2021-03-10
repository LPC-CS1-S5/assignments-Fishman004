#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int i = 0;
  int n;
  bool isprime = true;
  while (i <= 100) {
    i++;
    isprime = true;
    //cout << "i = " << i << "\n";
    for (n = 2; n <= i/2; n++){
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

