#include		<iostream>
#include		<cctype>
#include		<cstring>
using namespace std;

bool 	idcheck(char []);
bool 	domaincheck(char []);

int 	main()
{
		char 	email[20];
    char id[20];
    char domain[20];
    char org[20];
    char * pch;
		cout 	<< "Enter your email \n";
		cin 	>> email;
    pch = strtok(email, "@,.");
    int num1;
    while (pch != NULL){
      id = pch;
    }

		if( idcheck(email))
			cout << "ID check passed\n";
		if( domaincheck(email))
			cout << "Domain check passed\n";
}
bool 	idcheck(char email[])
{
	return true;
}
bool	domaincheck(char email[])
{
	return true;
}