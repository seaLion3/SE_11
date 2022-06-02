#include <iostream>
#include <vector>

#include "ProductReviewControl.h"
#include "ProductReviewBoundary.h"
#include "entity.h"

ProductReviewControl::ProductReviewControl(ifstream* in_fp) {
	ProductReviewBoundary* productReviewBoundary = new ProductReviewBoundary();
	// 구매 만족도 입력받기
	productReviewBoundary->productReviewUI(in_fp);

	// 현재 로그인된 아이디 찾기
	UserAccount* currentUser = userAccountList->getCurrentlyLoggedIn();

	// 해당 판매자 구매 내역 가져오기
	vector<Product*> history = currentUser->getPurchaseHistory();

	// 리뷰 작성 후 해당 제품을 저장
	productList->writeReview(currentUser, productReviewBoundary->getName(), productReviewBoundary->getReview());
	Product* product = productList->getProduct(productReviewBoundary->getName());

	// 출력
	productReviewBoundary->printProductReview(product);
}