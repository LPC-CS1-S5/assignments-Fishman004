#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double weight;
  double distancetravelled;
  double cost;
  double totalcost;
  cout << "How heavy is the package? How far will it be going?\n";
  cin >>weight;
  cin >> distancetravelled;
  if (distancetravelled < 10 || distancetravelled > 3000){
    cout << "Distance travelled is either too low or too high\n";
    return 0;
  }
  if (weight > 20){
    cout << "The package is too heavy\n";
    return 0;
  }
  if (weight < 0 ){
    cout << "The package cannot be negative weight\n";
    return 0;
  }
  
  
  if (weight <= 2){
    cost = 1.1;
    totalcost = (distancetravelled / 500.00) * cost;
    cout << "It will cost " << fixed << setprecision(2) << totalcost << " to travel\n";
  }
  if (weight > 2 && weight <= 6){
    cost = 2.2;
    totalcost = (distancetravelled / 500.00) * cost;
    cout << "It will cost " << fixed << setprecision(2) << totalcost << " to travel\n";
  }
  if (weight > 6 && weight <= 10 ){
    cost = 3.7;
    totalcost = (distancetravelled / 500.00) * cost;
    cout << "It will cost " << fixed << setprecision(2) << totalcost << " to travel\n";
  }
  if (weight > 10 && weight <= 20){
    cost = 4.8;
    totalcost = (distancetravelled / 500.00) * cost;
    cout << "It will cost " << fixed << setprecision(2) << totalcost << " to travel\n";
  }
  




}