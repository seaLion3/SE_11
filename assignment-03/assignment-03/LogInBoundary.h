#pragma once
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class LogInBoundary {
	private:
		string id;
		string pw;

	public:
		void logInUI(ifstream* in_fp);
		void printLogIn(bool result);

		string getId();
		string getPw();

		void setId(string id);
		void setPw(string pw);
};