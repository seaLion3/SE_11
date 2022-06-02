#include <iostream>
#include "UserAccountList.h"
#include "entity.h"

using namespace std;

// userList �ּ�
vector<UserAccount*>* UserAccountList::getUserList() {
	return &(this->userList);
}

UserAccount* UserAccountList::createAccount(string name, string ssn, string id, string pw) {

	// validation
	for (int i = 0; i < userList.size(); i++) {
		if (userList[i]->getId() == id) {
			// ������ ���̵� ������ NULL�� return
			return NULL;
		}
	}

	// ��������� �߰�
	UserAccount* newUser = new UserAccount(name, ssn, id, pw);
	userList.push_back(newUser);
	return newUser;
}

UserAccount* UserAccountList::getCurrentlyLoggedIn() {
	return this->currentlyLoggedIn;
}

void UserAccountList::setCurrentlyLoggedIn(UserAccount* user) {
	this->currentlyLoggedIn = user;
}

bool UserAccountList::logInUser(string id, string pw) {
	for (int i = 0; i < userList.size(); i++) {
		if (userList[i]->getId() == id) {
			if (userList[i]->getPw() == pw) {
				userAccountList->setCurrentlyLoggedIn(userList[i]);
				return true;
			}
		}
	}
	return false;
}

void UserAccountList::logOut() {
	this->setCurrentlyLoggedIn(NULL);
}

void UserAccountList::resign(string id) {
	int idx;
	for (int i = 0; i < this->userList.size(); i++) {
		if (this->userList[i]->getId() == id) {
			idx = i;
		}
	}
	this->logOut();
	this->userList.erase(this->userList.begin() + idx);
}

extern UserAccountList* userAccountList = new UserAccountList();
extern vector<UserAccount*>* userList = (userAccountList->getUserList());