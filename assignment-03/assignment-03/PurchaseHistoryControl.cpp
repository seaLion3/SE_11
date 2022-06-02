#include <iostream>

#include "PurchaseHistoryControl.h"
#include "PurchaseHistoryBoundary.h"
#include "entity.h"

using namespace std;

PurchaseHistoryControl::PurchaseHistoryControl() {
	PurchaseHistoryBoundary* purchaseHistoryBoundary = new PurchaseHistoryBoundary();

	// 현재 로그인된 유저
	UserAccount* user = userAccountList->getCurrentlyLoggedIn();

	// 해당 유저의 구매 목록
	vector<Product*> history = user->getPurchaseHistory();

	// 출력
	purchaseHistoryBoundary->printPurchaseHistory(history);
}