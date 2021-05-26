#include <iostream>
#include <cstring>
#include <string.h>
#include <fstream>
#include <stdio.h>
using namespace std;
int main(){
  char cr[] = "The Python 2 language was officially discontinued in 2020 (first planned for 2015), and Python 2.7.18 is the last Python 2.7 release and therefore the last Python 2 release. No more security patches or other improvements will be released for it. With Python 2's end-of-life, only Python 3.5.x and later are supported. thither";
  char cd[] = "th";
  int countchar;
  char * pch;
  printf ("Looking for the 'th' character in \"%s\"...\n",cr);
  pch=strchr(cr,'th');
  while (pch!=NULL)
  {
    countchar++;
    pch=strchr(pch+1,'th');
  }
  cout << "The character set has been found " << countchar << " times";

  
  
}