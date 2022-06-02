#include <iostream>
#include "CheckSellingProductControl.h"
#include "entity.h"

using namespace std;

CheckSellingProductControl::CheckSellingProductControl() {
	// Boundary 인스턴스생성
	CheckSellingProductBoundary* checkSellingProductBoundary = new CheckSellingProductBoundary();

	// 판매 상품 목록
	vector<Product*> sellingProducts;

	// 현재 로그인된 아이디
	string id = userAccountList->getCurrentlyLoggedIn()->getId();

	// 판매 상품 목록
	sellingProducts = productList->getSellingProducts(id);

	// 화면 출력
	checkSellingProductBoundary->printCheckSellingProduct(sellingProducts);
}