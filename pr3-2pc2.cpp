#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double numboys;
  double numgirls;
  double totalstudents;
  double percentboys;
  double percentgirls;


  cout << "Please enter how many boys and girls are in the class" << "\n";
  cin >> numboys;
  cin >> numgirls;
  totalstudents = numboys + numgirls;
  percentboys = numboys / totalstudents;
  percentboys = percentboys * 100;
  percentgirls = numgirls / totalstudents;
  percentgirls = percentgirls * 100;

  cout << "The class is " << percentboys << "% boys and " << percentgirls << "% girls" << "\n";




}