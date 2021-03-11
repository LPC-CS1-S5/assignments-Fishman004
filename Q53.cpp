#include <iostream>
using namespace std;

int main(){
  
  int n;
  bool isprime = true;
  int firstnum;
  int secnum;
  cout << "What prime numbers do you need a range in?\n";
  cin >> firstnum;
  cin >> secnum;
  while (firstnum < secnum){
    firstnum++;
    isprime = true;
    for (n = 2; n <= firstnum / 2; n++){
      if (firstnum % n == 0){
        isprime = false;
        break;
      }
      else if (isprime == true){
      cout << firstnum << "\n";
      break;
    }
    }
    
  }
}