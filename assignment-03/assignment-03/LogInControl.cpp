#include <iostream>
#include "LogInControl.h"
#include "LogInBoundary.h"
#include "entity.h"

using namespace std;

LogInControl::LogInControl(ifstream* in_fp) {

	LogInBoundary* logInBoundary = new LogInBoundary();

	// �Է�
	logInBoundary->logInUI(in_fp);
	
	// �α���
	string id = logInBoundary->getId();
	string pw = logInBoundary->getPw();
	bool authenticationResult = userAccountList->logInUser(id, pw); // id, pw�� ��Ī�Ǹ� true �ƴϸ� false ��ȯ

	// ���
	logInBoundary->printLogIn(authenticationResult); // ����� ���� currentlyLoggedIn ���
}