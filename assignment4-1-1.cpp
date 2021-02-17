#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double quantity;
  double price = 99;
  double totalprice;
  cout << "Please enter how many units you will be purchasing" << "\n";
  cin >> quantity;
  if (quantity < 0){
    return(0);
  }
  if (quantity >= 10 && quantity <= 19){
    price = price * 0.8;
  }
  if (quantity >= 20 && quantity <= 49){
    price = price * 0.7;
  }
  if (quantity >= 50 && quantity <= 99){
    price = price * 0.6;
  }
  if (quantity >= 100){
    price = price * 0.5;
  }
  totalprice = price * quantity;
  cout << "Total price will be $" << fixed << setprecision(2) << totalprice << "\n";
}