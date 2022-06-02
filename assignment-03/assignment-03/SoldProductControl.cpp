#pragma once

#include <iostream>
#include "SoldProductControl.h"
#include "SoldProductBoundary.h"
#include "entity.h"

SoldProductControl::SoldProductControl() {
	SoldProductBoundary* soldProductBoundary = new SoldProductBoundary();

	// ���� �α��ε� ���� ����
	UserAccount* currentUser = userAccountList->getCurrentlyLoggedIn();
	string id = currentUser->getId();

	// stock != supply�� ��ǰ ���
	vector<Product*> soldProductList = productList->getSoldProducts(id);

	// �ش� ����� ���
	soldProductBoundary->printSoldProduct(soldProductList);
}