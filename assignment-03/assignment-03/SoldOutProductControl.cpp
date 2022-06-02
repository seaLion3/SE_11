#include <iostream>
#include <algorithm>

#include "SoldOutProductControl.h"
#include "SOldOutProductBoundary.h"
#include "entity.h"

using namespace std;

bool comp(Product* a, Product* b) {
	return a->getName() < b->getName();
}

SoldOutProductControl::SoldOutProductControl() {
	SoldOutProductBoundary* soldOutProductBoundary = new SoldOutProductBoundary();

	// 현재 로그인된 유저 정보
	UserAccount* currentUser = userAccountList->getCurrentlyLoggedIn();
	string id = currentUser->getId();

	// 판매 목록 중 stock이 0인 상품 목록
	vector<Product*> soldOutList = productList->getSoldOutProducts(id);

	// 정렬
	sort(soldOutList.begin(), soldOutList.end(), comp);
	

	// Boundary에 전달하여 출력
	soldOutProductBoundary->printSoldOutProduct(soldOutList);
}