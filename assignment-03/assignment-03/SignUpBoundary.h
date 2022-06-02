#include <iostream>
#include <string>
#include <vector>
#include "entity.h"
using namespace std;

class SignUpBoundary {
private:
	string name;
	string ssn;
	string id;
	string pw;

public:
	void signUpUI(ifstream* in_fp);
	void printSignUp(UserAccount* newUser);

	string getName();
	string getSsn();
	string getId();
	string getPw();

	void setName(string name);
	void setSsn(string ssn);
	void setId(string id);
	void setPw(string pw);
};