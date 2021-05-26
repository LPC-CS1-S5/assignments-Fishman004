#include <iostream>
#include <fstream>
using namespace std;

const unsigned short N=5;
struct Scores{     
    double sc[N];     
    string grade;
};

struct Grade{    
    string first;    
    string last;   
    string ssn;   
    Scores score;
};

Grade g;




int main(){
  ifstream myfile;
  myfile.open("grades.txt");
  if (!myfile){
    cout << "File open error\n";
    exit(0);
  }
  int i = 0;
  while (myfile >> g[i].first >> g[i].last >> g[i].ssn >> g[i].score){
    cout << g[i].first << "    ";
    cout << g[i].last << "    ";
    cout << g[i].ssn << "    ";
    cout << g[i].score << "\n";
    i++;
  }
  while (i < 21){
    findEmployeeDep(e[i]);
    findEmployeeSalary(e[i]);
    i++;
  }

  ifstream myfile;
  myfile.open ("grades.txt");
  if (myfile.is_open()){
    while(getline(myfile,line)){

    }
  }

}