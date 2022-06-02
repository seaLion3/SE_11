#pragma once
#include <iostream>
#include<fstream>
#include "Product.h"

using namespace std;

class ProductReviewBoundary {
	private:
		string name;
		int review;
	public:
		void productReviewUI(ifstream* in_fp);
		void printProductReview(Product* product);

		string getName();
		int getReview();

		void setName(string name);
		void setReview(int review);
};