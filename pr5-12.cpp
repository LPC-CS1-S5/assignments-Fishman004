#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int i;
  int j;
  for (i = 0; i <= 2; i++){
    for (j = 0; j <= i; j++){
      cout << i << "," << j << "\n";
    }
  }
}