#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double weight;
  double milesshipped;
  double travelprice;
  double totalprice;

  cout << "Please enter the weight of the package and then the distance travelled" << "\n";
  cin >> weight;
  cin >> milesshipped;
  if (weight <= 2){
    travelprice = 1.10;
  }
  if (weight > 2 && weight <= 6){
    travelprice = 2.20;
  }
  if (weight > 6 && weight <= 10){
    travelprice = 3.70;
  }
  if (weight > 10 && weight <= 20){
    travelprice = 4.80;
  }
  if (weight > 20){
    cout << "This item is too large";
    return(0);
  }
  milesshipped = milesshipped / 500;

  totalprice = travelprice * milesshipped;

  cout << "The total price will be $" << fixed << setprecision(2) << totalprice << endl;

}