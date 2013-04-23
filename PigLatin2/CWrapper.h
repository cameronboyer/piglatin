#ifndef CWRAPPER
#define CWRAPPER

#include <iostream>
#include <string>
using namespace std;

class CWrapper
{
private:

public:
	CWrapper();
	
	string Scramble(string );
	string UnScramble(string );
	//only takes the information from the text box and which box
	//input, 0 for english, filename
	bool saveFile(string, int english, string  );
	~CWrapper();
};

extern "C"{
//the int will be implemented later 
bool cSaveFile(string , int english, string );
//english is true for english files
string cLoadFile(bool english);
};

#endif



