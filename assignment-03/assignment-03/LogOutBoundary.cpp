#include <iostream>
#include <fstream>

#include "LogOutBoundary.h"

void LogOutBoundary::printLogOut(string id) {
	ofstream output("output.txt", ios::app);
	string line = "> " + id;
	output << "2.2. �α׾ƿ�" << endl;
	output << line << endl;
}