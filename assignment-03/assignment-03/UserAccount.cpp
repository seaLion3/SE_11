#include <iostream>
#include "UserAccount.h"
#include <vector>

// UserAccount �Լ�
UserAccount::UserAccount(string name, string ssn, string id, string pw) {
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->pw = pw;
}

string UserAccount::getName() {
	return this->name;
}

string UserAccount::getSsn() {
	return this->ssn;
}

string UserAccount::getId() {
	return this->id;
}

string UserAccount::getPw() {
	return this->pw;
}

Product* UserAccount::getSearchHistory() {
	return this->searchHistory;
}

void UserAccount::setSearchHistory(Product* searchedProduct) {
	this->searchHistory = searchedProduct;
}

void UserAccount::addPurchaseHistory(Product* product) {
	for (int i = 0; i < this->purchaseHistory.size(); i++) {
		if ((this->purchaseHistory)[i] == product) {
			// �̹� ������ �� ������ �ѱ�
			return;
		}
	}
	
	// ������ �ش� ��ǰ ���� �߰�
	(this->purchaseHistory).push_back(product);
}

vector<Product*> UserAccount::getPurchaseHistory() {
	return (this->purchaseHistory);
}