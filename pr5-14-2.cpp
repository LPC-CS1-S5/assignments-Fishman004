#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

int main(){
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open()){
    while (getline(myfile,line)){
      cout << line << "\n";
    }
    myfile.close();
  }
  cout << line << "\n";
}