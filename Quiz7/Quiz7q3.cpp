#include <iostream>
using namespace std;

int findMax(int number[10], int, int);

int main(){
  int greatestnum1, greatestnum2;

  int n = 10;
  int number[10] = {10,15,0,-25,19,20,25,30,45,20};
  greatestnum1 = findMax(number, 0, 4);
  greatestnum2 = findMax(number, 5, 9);
  cout << greatestnum1 << "\n";
  cout << greatestnum2 << "\n";

}
int findMax(int number[], int from, int to){
  int largestnum = 0;
  
  for (int n = from; n <= to; n++){
    if (number[n] > largestnum){
      largestnum = number[n];
    }
  }
  return largestnum;
}
//With this program, I created two greatest number variables, as I would call findMax twice. I called it twice with two different sections, which I manually wrote in, but could have used the n/2 if necessary. The array, from and to were sent into findMax. The for loop inside would start from the from and go until it reached to. It would check every number against the local variable largestnum which it would replace if it was larger. This was returned at the end. Back in the main function I would print these two out for us to see. I didn't really have any problems with this one besides trying to figure out how to insert the array into the function, as I had a syntax error. Once I figured it out it worked well though.