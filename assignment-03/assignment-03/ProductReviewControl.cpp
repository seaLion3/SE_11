#include <iostream>
#include <vector>

#include "ProductReviewControl.h"
#include "ProductReviewBoundary.h"
#include "entity.h"

ProductReviewControl::ProductReviewControl(ifstream* in_fp) {
	ProductReviewBoundary* productReviewBoundary = new ProductReviewBoundary();
	// ���� ������ �Է¹ޱ�
	productReviewBoundary->productReviewUI(in_fp);

	// ���� �α��ε� ���̵� ã��
	UserAccount* currentUser = userAccountList->getCurrentlyLoggedIn();

	// �ش� �Ǹ��� ���� ���� ��������
	vector<Product*> history = currentUser->getPurchaseHistory();

	// ���� �ۼ� �� �ش� ��ǰ�� ����
	productList->writeReview(currentUser, productReviewBoundary->getName(), productReviewBoundary->getReview());
	Product* product = productList->getProduct(productReviewBoundary->getName());

	// ���
	productReviewBoundary->printProductReview(product);
}