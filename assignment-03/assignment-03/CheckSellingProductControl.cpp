#include <iostream>
#include "CheckSellingProductControl.h"
#include "entity.h"

using namespace std;

CheckSellingProductControl::CheckSellingProductControl() {
	// Boundary �ν��Ͻ�����
	CheckSellingProductBoundary* checkSellingProductBoundary = new CheckSellingProductBoundary();

	// �Ǹ� ��ǰ ���
	vector<Product*> sellingProducts;

	// ���� �α��ε� ���̵�
	string id = userAccountList->getCurrentlyLoggedIn()->getId();

	// �Ǹ� ��ǰ ���
	sellingProducts = productList->getSellingProducts(id);

	// ȭ�� ���
	checkSellingProductBoundary->printCheckSellingProduct(sellingProducts);
}