#pragma once
#include <iostream>
#include <string>
#include "UserAccount.h"

using namespace std;

class UserAccountList {
private:
    vector<UserAccount*> userList;
    UserAccount* currentlyLoggedIn;

public:
    vector<UserAccount*>* getUserList();

    UserAccount* createAccount(string name, string ssn, string id, string pw);

    UserAccount* getCurrentlyLoggedIn();
    void setCurrentlyLoggedIn(UserAccount* user);


    // 인증되면 해당 UserAccount의 ptr 반환
    // 그렇지 않으면 null 반환
    bool logInUser(string id, string pw);

    void logOut();

    void resign(string id);
};
