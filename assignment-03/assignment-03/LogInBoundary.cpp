#include <iostream>
#include "LogInBoundary.h"
#include "entity.h"

using namespace std;

void LogInBoundary::logInUI(ifstream* in_fp) {
	string id;
	string pw;

	*in_fp >> id >> pw;

	this->setId(id);
	this->setPw(pw);
};

void LogInBoundary::printLogIn(bool authenticationResult) {
	ofstream output("output.txt", ios::app);
	string line;

	if (authenticationResult) {
		UserAccount* currentlyLoggedIn = userAccountList->getCurrentlyLoggedIn();
		string id = currentlyLoggedIn->getId();
		string pw = currentlyLoggedIn->getPw();

		line = "> " + id + " " + pw;
	}
	else {
		line = "> ";
	}
	output << "2.1. ·Î±×ÀÎ" << endl;
	output << line << endl;
	output.close();
};

string LogInBoundary::getId() {
	return this->id;
}

string LogInBoundary::getPw() {
	return this->pw;
}

void LogInBoundary::setId(string id) {
	this->id = id;
}

void LogInBoundary::setPw(string pw) {
	this->pw = pw;
}

