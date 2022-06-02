#include <iostream>
#include <fstream>

#include "CheckSellingProductBoundary.h"

using namespace std;

void CheckSellingProductBoundary::printCheckSellingProduct(vector<Product*> sellingProdcuts) {
	ofstream output("output.txt", ios::app);
	string name;
	string company;
	int price;
	int stock;

	output << "3.2 등록 상품 조회" << endl;

	for (int i = 0; i < sellingProdcuts.size(); ++i) {
		name = sellingProdcuts[i]->getName();
		company = sellingProdcuts[i]->getCompany();
		price = sellingProdcuts[i]->getPrice();
		stock = sellingProdcuts[i]->getStock();

		string line = "> " + name + " " + company + " " + to_string(price) + " " + to_string(stock);
		output << line << endl;
	}
	output.close();
}