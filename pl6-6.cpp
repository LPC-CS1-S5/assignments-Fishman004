#include <iostream>
using namespace std;

void getListprime(int,int);

int main(){
  int begin, end;
  cout << "Please enter a range\n";
  cin >> begin;
  cin >> end;

  if (begin == end){
    getListprime(begin, 100);
  }else if (begin > end){
    getListprime(0,100);
  }else if (begin < end){
    getListprime(begin, end);
  }
}

void getListprime(int begin, int end){
  bool isPrime;
  int i;
  for (i = begin; i <= end/2; i++){
    if (end % i == 0){
      isPrime = false;
      
    }else{
      isPrime = true;
      cout << i << "\n";
      
    }
  }

}