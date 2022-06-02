#include <iostream>

#include "ProductReviewBoundary.h"


void ProductReviewBoundary::productReviewUI(ifstream* in_fp) {
	string name;
	string review;

	*in_fp >> name >> review;

	this->name = name;
	this->review = stoi(review);
}

void ProductReviewBoundary::printProductReview(Product* product) {
	ofstream output("output.txt", ios::app);
	string line;
	line = "> " + product->getSellerID() + " " + product->getName() + " " + to_string((int)round(product->getRating()));
	output << "4.4. 상품 구매만족도 평가" << endl;
	output << line << endl;
}

string ProductReviewBoundary::getName() {
	return this->name;
}

int ProductReviewBoundary::getReview() {
	return this->review;
}

void ProductReviewBoundary::setName(string name) {
	this->name = name;
}

void ProductReviewBoundary::setReview(int review) {
	this->review = review;
}