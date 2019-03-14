//
// Created by Weaver on 14/03/2019.
//

#include  <string.h>
#include  <iostream>

#include "FnameC.h"


/*--------------------------------------------------------------------------*/
/*-------- Constructors, etc -----------------------------------------------*/
/*--------------------------------------------------------------------------*/
FileNameC::FileNameC():StringC ()
{
	filetype = 0;

}

FileNameC::FileNameC( int n, char* str):StringC (str)
{
	filetype = n;
}

void FileNameC::Print()
{
	StringC::Print();
	std::cout << filetype << std::endl;
}

bool FileNameC::isValid()
{
	//for loop
	for (int i(0); i < this->Length(); i++ )
	{
		if  (StringC::operator[](i) == '.' )
			{
				std::cout << ". specified" << std::endl;
				return true;
			}
		i++;

	}


	{
		std::cout << "No . specified" << std::endl;
		return false;
	}
}