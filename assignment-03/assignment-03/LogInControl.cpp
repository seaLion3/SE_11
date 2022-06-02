#include <iostream>
#include "LogInControl.h"
#include "LogInBoundary.h"
#include "entity.h"

using namespace std;

LogInControl::LogInControl(ifstream* in_fp) {

	LogInBoundary* logInBoundary = new LogInBoundary();

	// 입력
	logInBoundary->logInUI(in_fp);
	
	// 로그인
	string id = logInBoundary->getId();
	string pw = logInBoundary->getPw();
	bool authenticationResult = userAccountList->logInUser(id, pw); // id, pw가 매칭되면 true 아니면 false 반환

	// 출력
	logInBoundary->printLogIn(authenticationResult); // 결과를 통해 currentlyLoggedIn 출력
}