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


    // �����Ǹ� �ش� UserAccount�� ptr ��ȯ
    // �׷��� ������ null ��ȯ
    bool logInUser(string id, string pw);

    void logOut();

    void resign(string id);
};
