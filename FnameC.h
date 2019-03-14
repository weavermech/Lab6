//
// Created by Weaver on 14/03/2019.
//

#ifndef LAB6_FNAMEC_H
#define LAB6_FNAMEC_H

#include "StringC.h"

class FnameC: public StringC{
	char *           ps;
	int              size;

  public:

	// Constructors,  destructor, assignment
	// -------------------------------------

	StringC();
	// Default Constructor

	StringC(const char pc[]);
	// Constructor from pointer to char, makes a copy

	StringC(const int i);
	// Constructor from speciffied size, initialized to termination characters

	StringC(const StringC & s);
	// Copy constructor

	StringC & operator=(const StringC & s);
	// Assignment

	~StringC();
	// Destructor

	// Operations
	// ----------

	char & operator[](const int i);
	// this is a put char command - the string termination
	// cannot be overwritten

	const char & operator[](const int i) const;
	// this is a get character command

	void Print(){std::cout << ps << std::endl;}
	// Prints the string to stdout

	int Length();
	// return number of characters excluding trailing 0

	StringC & operator+=(const StringC & s);
	// concatenate

	friend std::ostream & operator<<(std::ostream & s, const StringC & st);
	friend std::istream & operator>>(std::istream & s, StringC & st);
};

// -------------------------------------------------------------------------

StringC operator+(const StringC &q, const StringC& p);
// concatenates 2 strings

std::ostream & operator<<(std::ostream & s, const StringC & st);
std::istream & operator>>(std::istream & s, StringC & st);


#endif //LAB6_FNAMEC_H
