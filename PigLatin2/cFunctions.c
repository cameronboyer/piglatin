/* this file defines c functions

*/
#include "stdafx.h"

bool cSaveFile(string input, int english,string name)
{
	FILE* pFile;
	pFile = fopen(name.c_str(),"w");
	string temp = input;
	if(pFile!=NULL)
	{
		fwrite(input.c_str(), 1,input.length(),pFile);
		fclose(pFile);
	}
		
	else
	{
		perror("There was an error");
		fclose(pFile);
	}

	return true;
}

string cLoadFile(bool english)
{
	char mystring [300];

	if(english)
	{
		FILE *pFile;
		pFile = fopen("text.etxt","r");
		
		if (pFile != NULL)
			fgets(mystring , 100 , pFile);
      
		fclose (pFile);
    }


return mystring;
}
