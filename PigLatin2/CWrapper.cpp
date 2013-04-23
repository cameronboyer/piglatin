#include "stdafx.h"
#include <vector>
#include <sstream>


CWrapper::CWrapper(){}

CWrapper::~CWrapper(){}

bool CWrapper::saveFile(string input, int english,string name)
{
	cSaveFile(input, english, name);
	return true;
}


//makes piglatin
string CWrapper::Scramble(string input)
{
	
	vector<string> noSpaces;
	string modified;
	string holder;
	
	stringstream ss(input);
	/*more advanced this would follow with a switch instead of
	appending a ". "
	string characters = "!'.,";
	*/
	string characters = ".";
	//splits every word up based on spaces
	while(ss >> holder)
	{
		noSpaces.push_back(holder);
	}

	//now look at each individual word
	for(unsigned int i = 0; i < noSpaces.size(); i++)
	{
		string temp = noSpaces[i];
		//gets location of . (this is more for
		//checking for other special chars
		unsigned found = temp.find_first_of(characters);
		if (found!=std::string::npos)
		{
			string first;
			first = temp.substr(0,1);
			temp.erase(0,1);
			temp.erase((temp.size()-1),1);
			temp.append(first);
			temp.append("ay. ");
		}
		else
		{
			string first;
			first = temp.substr(0,1);
			temp.erase(0,1);
			temp.append(first);
			temp.append("ay ");
		}
		modified.append(temp);
	}
	return modified;
}

//makes english
string CWrapper::UnScramble(string input)
{
	vector<string> noSpaces;
	string modified;
	string holder;
	
	stringstream ss(input);
	/*more advanced this would follow with a switch instead of
	appending a ". "
	string characters = "!'.,";
	*/
	string characters = ".";
	//splits every word up based on spaces
	while(ss >> holder)
	{
		noSpaces.push_back(holder);
	}

	//now look at each individual word
	for(unsigned int i = 0; i < noSpaces.size(); i++)
	{
		string temp = noSpaces[i];
		//gets location of . (this is more for
		//checking for other special chars
		unsigned found = temp.find_first_of(characters);
		if (found!=std::string::npos)
		{
			string last;
			last = temp.substr((temp.size()-4),4);
			temp.erase((temp.size()-4),4);
			last.erase(1,3);
			temp.insert(0,last); 
			temp.append(". ");
		}
		else
		{
			string last;
			last = temp.substr((temp.size()-3),3);
			temp.erase((temp.size()-3),3);
			last.erase(1,2);
			temp.insert(0,last);
			temp.append(" ");
		}
		modified.append(temp);
	}
	return modified;
}

