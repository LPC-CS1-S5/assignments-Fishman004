#include    <iostream>
using namespace std;

void printtriangle(int numbers[][3], int);
int main()
{
    const int SIZE = 3;
    int numbers[SIZE][SIZE] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
    
    printtriangle(numbers, SIZE);
}
void printtriangle(int num[][3], int size)
{
   for (int n = 0; n < 3; n++){
     for (int i = 0; i <= n; i++){
      cout << num[n][i] << " ";
      if ( i == n){
        cout << "\n";
      }
     }
     
   }
}
// With this program, I used the sample start that you provided. What I did change was the printtriangle function. It took in the full array, but I chose not to use the size. I used two for loops to find the set in the array, and then print until the item number was equal to the set number. This created the triangle effect. I also made it so that if the final i value had reached n, it would place an indent for the next line. I had some trouble with it continuing on forever, but fixed that by removing the equal sign in n <= 3 which was causing the error.