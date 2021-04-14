#include <iostream>
#include <ctime>
using namespace std;

void getRandnum(int&, int&, int&);
int findMin(int, int, int);
void printResult(int,int,int,int);

int main(){
  int num1, num2, num3, min;
  getRandnum(num1, num2, num3);
  min = findMin(num1, num2, num3);
  printResult(num1,num2,num3, min);
}
void getRandnum(int& n1, int& n2, int& n3){
  srand((unsigned) time(0));
  n1 = (rand() % 100);
  n2 = (rand() % 100);
  n3 = (rand() % 100);
}
int findMin( int n1, int n2, int n3){
  int smallestNum;
  if (n1 <= n2 && n1 <= n3){
    smallestNum = n1;
  }
  else if (n2 <= n1 && n2 <= n3){
    smallestNum = n2;
  }
  else {
    smallestNum = n3;
  }
  return smallestNum;
}
void printResult(int n1, int n2, int n3, int min){
  cout << "The three random numbers are " << n1 << " " << n2 << " and " << n3 << "\n";
  cout << "The minimum of these values is " << min << "\n"; 
}