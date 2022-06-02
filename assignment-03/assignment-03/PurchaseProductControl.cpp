#include <iostream>

#include "PurchaseProductControl.h"
#include "PurchaseProductBoundary.h"
#include "entity.h"

PurchaseProductControl::PurchaseProductControl() {
	PurchaseProductBoundary* purchaseProductBoundary = new PurchaseProductBoundary();
	
	// 현재 로그인된 유저
	UserAccount* currentUser = userAccountList->getCurrentlyLoggedIn();


	// 검색했던 상품 가져오기
	Product* searchedProduct = currentUser->getSearchHistory();

	// 해당 상품 차감하기
	searchedProduct->purchaseProduct();

	// 구매자에게 구매 기록 남기기
	currentUser->addPurchaseHistory(searchedProduct);
	// 해당 상품 판매자ID, 상품명 출력
	purchaseProductBoundary->printPurchaseProduct(searchedProduct);
};