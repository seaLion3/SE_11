#include <iostream>
#include "UserAccount.h"
#include <vector>

// UserAccount 함수
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
			// 이미 구매한 적 있으면 넘김
			return;
		}
	}
	
	// 없으면 해당 상품 내역 추가
	(this->purchaseHistory).push_back(product);
}

vector<Product*> UserAccount::getPurchaseHistory() {
	return (this->purchaseHistory);
}