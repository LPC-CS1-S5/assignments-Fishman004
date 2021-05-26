#include <iostream>
using namespace std;

int main(){
  int totalsize = 0;
  const int SIZE1=5;
  const int SIZE2=10;
  int numbers1[SIZE1] = {2, 3, 5, 9, 10};
  int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};
  for (int i = 0; i < SIZE1; i++){
    for (int j = 0; j < SIZE2; j++){
      if (numbers1[i] == numbers2[j]){
        totalsize++;
      }
    }
  }
  if (totalsize == SIZE1){
    cout << "The first array is a subset of the second" << " \n";
  }
  else{
    cout << "The arrays are not inclusive" << "\n";
  }
}

