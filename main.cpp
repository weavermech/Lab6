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
	FileNameC f1(1, "dave.txt");

	std::cout << "Testing result: " << f1.isValid() << std::endl;

	f1.Print();
	return 0;
}