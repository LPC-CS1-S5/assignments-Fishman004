#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;



const unsigned short N=5;
struct Scores{          
  string grade1, grade2, grade3, grade4, grade5;
};

struct Grade{    
  string first;    
  string last;   
  string ssn;   
  Scores score;
  string letterGrade;
};

void printToFile(Grade);

Grade g[20];




int main(){
  ifstream myfile;
  
  myfile.open("grades.txt");
  if (!myfile){
    cout << "File open error\n";
    exit(0);
  }
  int i = 0;
  int fctn = 0;
  stringstream ss;
  string line;
  string line2;
  while (myfile >> line2){
    ss << line2;
      while (getline(ss,line, ',') && (i < 17)){
        
        switch(fctn){
          case 0: 
             g[i].first = line;
            
            break;
          case 1:
              g[i].last = line;
              break;
          case 2:
              g[i].ssn = line;
              break;
          case 3:
             g[i].score.grade1 = line;
              break;
          case 4:
             g[i].score.grade2 = line;
             break;
          case 5:
              g[i].score.grade3 = line;
              break;
          case 6:
              g[i].score.grade4 = line;
              break;
          case 7:
              g[i].score.grade5 = line;
              break;
          case 8:
             g[i].letterGrade = line;
              i++;
            
            break;
        }
        fctn = ++fctn % 9;
    }
    ss.clear();
    
    
  }
  
  printToFile(g[19]);
}

void printToFile(Grade g){
  ofstream myfile2;
  myfile2.open("grades.bin", ios::binary);
  int i = 0;
  while ( i < 17){
    cout << setw(8) << g[i].first << "\n";
    cout << setw(8) << g[i].last << "\n";
    cout << setw(11) << g[i].ssn << "\n";
    cout << setw(4) << g[i].score.grade1 << "\n";
    cout << setw(4) << g[i].score.grade2 << "\n";
    cout << setw(4) << g[i].score.grade3 << "\n";
    cout << setw(4) << g[i].score.grade4 << "\n";
    cout << setw(4) << g[i].score.grade5 << "\n";
    cout << setw(3) << g[i].letterGrade << "\n";
    i++;
  }
  

}