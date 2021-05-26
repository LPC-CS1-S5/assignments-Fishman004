#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
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
  while (myfile >> line){
    ss << line;
      while (getline(ss,line, ',')){
        while(i < 16){
        switch(fctn){
          case 0: 
            g[i].first = line;
            cout << g[i].first;
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
    }
    
  }
  
}