#include <iostream>
#include <fstream>
#include "ResignBoundary.h"

using namespace std;

void ResignBoundary::printResign(string id) {
	ofstream output("output.txt", ios::app);
	string line = "> " + id;

	output << "1.2. ȸ��Ż��" << endl;
	output << line << endl;
}