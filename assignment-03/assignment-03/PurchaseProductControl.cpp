#include <iostream>

#include "PurchaseProductControl.h"
#include "PurchaseProductBoundary.h"
#include "entity.h"

PurchaseProductControl::PurchaseProductControl() {
	PurchaseProductBoundary* purchaseProductBoundary = new PurchaseProductBoundary();
	
	// ���� �α��ε� ����
	UserAccount* currentUser = userAccountList->getCurrentlyLoggedIn();


	// �˻��ߴ� ��ǰ ��������
	Product* searchedProduct = currentUser->getSearchHistory();

	// �ش� ��ǰ �����ϱ�
	searchedProduct->purchaseProduct();

	// �����ڿ��� ���� ��� �����
	currentUser->addPurchaseHistory(searchedProduct);
	// �ش� ��ǰ �Ǹ���ID, ��ǰ�� ���
	purchaseProductBoundary->printPurchaseProduct(searchedProduct);
};