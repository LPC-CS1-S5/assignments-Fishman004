#include <iostream>
#include <string>
#include <fstream>
using namespace std;



struct employee {
    int id;
    string fname;
    string lname;
    int salary;
    string depName;
    string date1;
    string date2;
    string date3;
  };
employee e[20];
void findEmployeeSalary(employee);
void findEmployeeDep(employee);

int main(){
  ifstream myfile;
  myfile.open("employee.txt");
  if (!myfile){
    cout << "File open error\n";
    exit(0);
  }
  int i = 0;
  while (myfile >> e[i].id >> e[i].fname >> e[i].lname >> e[i].salary >> e[i].depName >> e[i].date1 >> e[i].date2 >> e[i].date3){
    cout << e[i].id << "\n";
    cout << e[i].fname << "\n";
    cout << e[i].lname << "\n";
    cout << e[i].salary << "\n";
    cout << e[i].depName << "\n";
    cout << e[i].date1 << "\n";
    cout << e[i].date2 << "\n";
    cout << e[i].date3 << "\n";
  }
  while (i < 21){
    findEmployeeDep(e[i]);
    findEmployeeSalary(e[i]);
    i++;
  }
}

void findEmployeeSalary(employee){
  int i = 0;
  if (e[i].salary > 100000 && i < 20){
    cout << e[i].fname << " " << e[i].lname << "\n";
  }
  else {
    i++;
  }
}
void findEmployeeDep(employee){
  int i = 0;
  if (e[i].depName == "Computer" && i < 20){
    cout << e[i].fname << " " << e[i].lname << "\n";
  }
  else {
    i++;
  }
  
}