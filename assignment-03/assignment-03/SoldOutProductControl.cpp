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

	// ���� �α��ε� ���� ����
	UserAccount* currentUser = userAccountList->getCurrentlyLoggedIn();
	string id = currentUser->getId();

	// �Ǹ� ��� �� stock�� 0�� ��ǰ ���
	vector<Product*> soldOutList = productList->getSoldOutProducts(id);

	// ����
	sort(soldOutList.begin(), soldOutList.end(), comp);
	

	// Boundary�� �����Ͽ� ���
	soldOutProductBoundary->printSoldOutProduct(soldOutList);
}