#include <iostream>
#include <vector>

#include "SignUpControl.h"
#include "SignUpBoundary.h"

using namespace std;

SignUpControl::SignUpControl(ifstream *in_fp) {

	SignUpBoundary* signUpBoundary = new SignUpBoundary();

	// input ÀÐ±â
	signUpBoundary->signUpUI(in_fp);

	string name = signUpBoundary->getName();
	string ssn = signUpBoundary->getSsn();
	string id = signUpBoundary->getId();
	string pw = signUpBoundary->getPw();

	UserAccount* newUser = userAccountList->createAccount(name, ssn, id, pw);
	
	signUpBoundary->printSignUp(newUser);
}