#include <iostream>
#include <cmath>
using namespace std;



int main(){
  int numbers[10] = {10,15,0,-25,19,20,25,30,45,20};
  
  for (int n=0; n < 10; n++){
    if ((n == 0) || (n == 9)){
      if ((abs(numbers[n] - numbers[n-1]) < 10) || (abs(numbers[n] - numbers[n+1]) < 10)){
      cout << numbers[n] << " less than 10\n";
    }
    }else{
      if ((abs(numbers[n] - numbers[n-1]) < 10) && (abs(numbers[n] - numbers[n+1]) < 10)){
      cout << numbers[n] << " less than 10\n";
    }
    }
    
  }
}

//With this program, I had a fairly simple time with it, as I made the array, then the for loop. The only issue I had was with the indexing. I was confused as to why the 1st term was coming up as 15, then realized the index started at 0 and moved it accordingly. I made a special if statement at the beginning for 0 and 9, which essentially was checking the same conditions but in an or condition rather than and. The rest was the and statement as they had numbers right next to them in the index.