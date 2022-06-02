#include <iostream>

#include "PurchaseHistoryControl.h"
#include "PurchaseHistoryBoundary.h"
#include "entity.h"

using namespace std;

PurchaseHistoryControl::PurchaseHistoryControl() {
	PurchaseHistoryBoundary* purchaseHistoryBoundary = new PurchaseHistoryBoundary();

	// ���� �α��ε� ����
	UserAccount* user = userAccountList->getCurrentlyLoggedIn();

	// �ش� ������ ���� ���
	vector<Product*> history = user->getPurchaseHistory();

	// ���
	purchaseHistoryBoundary->printPurchaseHistory(history);
}