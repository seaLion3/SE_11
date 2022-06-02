#include <iostream>

#include "LogOutControl.h"
#include "LogOutBoundary.h"
#include "entity.h"

LogOutControl::LogOutControl() {
	LogOutBoundary* logOutBoundary = new LogOutBoundary();

	string id = userAccountList->getCurrentlyLoggedIn()->getId();

	userAccountList->logOut(); // currentlyLoggedIn = NULL ·Î º¯°æ

	logOutBoundary->printLogOut(id);
}



