#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
  int num1;
  cout << "How many integers would you like?" << "\n";
  cin >> num1;
  srand((unsigned) time(0));
  int array1 [num1];
  ofstream myfile;
  myfile.open ("example.text");
  for ( int i = 1; i <= num1; i++){
    array1[num1] = (rand() % 100);
    myfile << array1[num1] << "\n";
    
  }
  
  myfile.close();
  return 0;

}