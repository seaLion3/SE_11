#include <iostream>
#include <fstream>
#include "SignUpBoundary.h"

using namespace std;


// 1.1 signUp
void SignUpBoundary::signUpUI(ifstream* in_fp) {
	string name, ssn, id, pw;
	(*in_fp) >> name >> ssn >> id >> pw;

	this->setName(name);
	this->setSsn(ssn);
	this->setId(id);
	this->setPw(pw);
}

void SignUpBoundary::printSignUp(UserAccount* newUser) {
	ofstream output("output.txt", ios::app);
	string line;

	if (newUser == NULL) {
		line = "> ";
	}
	else {
		line = "> " + newUser->getName() + " " + newUser->getSsn() + " " + newUser->getId() + " " + newUser->getPw();
	}
	output << "1.1. 회원가입" << endl;
	output << line << endl;
	output.close();
};

string SignUpBoundary::getName() {
	return this->name;
}

string SignUpBoundary::getSsn() {
	return this->ssn;
}

string SignUpBoundary::getId() {
	return this->id;
}

string SignUpBoundary::getPw() {
	return this->pw;
}

void SignUpBoundary::setName(string name) {
	this->name = name;
}

void SignUpBoundary::setSsn(string ssn) {
	this->ssn = ssn;
}

void SignUpBoundary::setId(string id) {
	this->id = id;
}

void SignUpBoundary::setPw(string pw) {
	this->pw = pw;
}
