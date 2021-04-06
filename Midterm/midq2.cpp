#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string line;
  int score1,score2,numSum, numAverage, numStudents, i = 0; 
  ifstream myfile;
  myfile.open("students.txt");
  
    while (!myfile.eof())
    {
      //getline(myfile, line, '\n');
      myfile >> line;
      cout << "Student Name: " << line;
      //getline(myfile,line, '\n');
      myfile >> line;
      score1 = stoi(line);
      cout << "      Score1: " << score1;
      myfile >> line;
      score2 = stoi(line);
      //cout << score1 << "\n";
      cout << "      Score2: " << score2;
      numSum = score1 + score2;
      cout << "      Sum: " << numSum; 
      numAverage = (score1 + score2) / 2;
      if (numAverage > 80){
        i++;
      }
      cout << "      Average: " << numAverage << "\n";
      

      //cout << score1 << "\n";
      //cout << score2 << "\n";
      //cin >> score1 >> score2;
      //cout << score1 << score2 << "\n";
    }
    cout << "The total number of students whose average is above 80: " << i << " students\n";
    myfile.close(); 

  return 0;
}
