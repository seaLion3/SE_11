#pragma once

#include <iostream>
#include "SoldProductControl.h"
#include "SoldProductBoundary.h"
#include "entity.h"

SoldProductControl::SoldProductControl() {
	SoldProductBoundary* soldProductBoundary = new SoldProductBoundary();

	// 현재 로그인된 유저 계정
	UserAccount* currentUser = userAccountList->getCurrentlyLoggedIn();
	string id = currentUser->getId();

	// stock != supply인 상품 목록
	vector<Product*> soldProductList = productList->getSoldProducts(id);

	// 해당 목록을 출력
	soldProductBoundary->printSoldProduct(soldProductList);
}