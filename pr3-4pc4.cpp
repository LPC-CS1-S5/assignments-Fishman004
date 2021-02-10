#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

int main(){
  string monthone;
  string monthtwo;
  string monththree;
  double monthonerain;
  double monthtworain;
  double monththreerain;
  double averagerain;


  cout << "Please enter a month and rainfall" << "\n";
  cin >> monthone >> monthonerain;
  cin >> monthtwo >> monthtworain;
  cin >> monththree >> monththreerain;
  averagerain = (monthonerain + monthtworain + monththreerain) / 3;
  cout << "The average rainfall for " << monthone << ", " << monthtwo << ",and " << monththree << " is " << fixed << setprecision(2) << averagerain << "\n";

}