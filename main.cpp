#include "StringC.h"
#include "FnameC.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	StringC s1("Hello World");
	StringC s2("Goodbye, cruel world");
	s1.Print();
	s2.Print();
	StringC s3=s1+s2;
	s3.Print();
	s3[11]=s3[12]=s3[13]=s3[14]=' ';
	cout << s3 << endl;
	FnameC f1("tester");
	return 0;
}