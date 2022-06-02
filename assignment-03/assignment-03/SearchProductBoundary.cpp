#include <iostream>
#include <fstream>

#include "SearchProductBoundary.h"


using namespace std;

void SearchProductBoundary::searchProductUI(ifstream* in_fp) {
	string productName;
	*in_fp >> productName;
	this->setProductName(productName);
}

void SearchProductBoundary::printSearchProduct(Product* searchResult) {
	ofstream output("output.txt", ios::app);
	string line;

	string sellerID = searchResult->getSellerID();
	string name = searchResult->getName();
	string company = searchResult->getCompany();
	int price = searchResult->getPrice();
	int stock = searchResult->getStock();
	double rating = searchResult->getRating();

	if (stock > 0) {
		line = "> " + sellerID + " " + name + " " + company + " " + to_string(price) + " " + to_string(stock) +
			" " + to_string((int)round(rating));
		output << "4.1. 상품 정보 검색" << endl;
		output << line << endl;
		output.close();
	}
}

string SearchProductBoundary::getProductName() {
	return this->productName;
}

void SearchProductBoundary::setProductName(string productName) {
	this->productName = productName;
}

