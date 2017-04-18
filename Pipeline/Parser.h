#ifndef __PARSER_H__
#define __PARSER_H__



#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include "Instruction.h"
#include <algorithm>
#include <cctype>
#include "Opcode.h"
#include <sstream>


using namespace std;

class Parser {

public:

	Parser();
	void parseConfig(string file);
	void parseProgram();
	map<string, string> parseMemory();
	map<string, string> parseRegister();

	string getConfig(string key);
	string getMem(string key);
	string getReg(string key);
	string getProg(int key);

	map<int, int> getRegMap();
	map<int, int> getMemMap();
	map<int, string> getProgMap();

	void convertMemory();
	void convertRegister();

	string toBinary(int num, string result);


private:
	map <string, string> config;
	map <int, int> mem; //convert to string int
	map <int, int> regMem; //int int
	map <int, string> prog; 

};

#endif