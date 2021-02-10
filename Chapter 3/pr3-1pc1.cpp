#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double classAtickets;
  double classBtickets;
  double classCtickets;
  double classAprice = 15.00;
  double classBprice = 12.00;
  double classCprice = 9.00;
  double classAincome;
  double classBincome;
  double classCincome;



  cout << "Please type the number of tickets for each class" << "\n";
  cin >> classAtickets;
  cin >> classBtickets;
  cin >> classCtickets;

  classAincome = classAprice * classAtickets;
  classBincome = classBprice * classBtickets;
  classCincome = classCprice * classCtickets;

  cout << fixed << setprecision(2) << "Class A made $" << classAincome << "\n";
  cout << fixed << setprecision(2) << "Class B made $" << classBincome << "\n";
  cout << fixed << setprecision(2) << "Class C made $" << classCincome << "\n";

  


}