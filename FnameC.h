//
// Created by Weaver on 14/03/2019.
//

#ifndef LAB6_FNAMEC_H
#define LAB6_FNAMEC_H

#include "StringC.h"

class FileNameC: public StringC {

  private:

	int filetype;

  public:

	FileNameC();	//default constructor
	FileNameC(int, char*);
	bool isValid();
	void Print();
	FileNameC(const FileNameC&);
};

#endif //LAB6_FNAMEC_H
