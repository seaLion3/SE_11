#include <iostream>
#include <fstream>
#include "SoldProductBoundary.h"

using namespace std;

void SoldProductBoundary::printSoldProduct(vector<Product*> soldProduct) {
	ofstream output("output.txt", ios::app);
	string line;

	output << "5.1. 판매 상품 통계" << endl;
	for (int i = 0; i < soldProduct.size(); i++) {
		int stock = soldProduct[i]->getStock();
		int supply = soldProduct[i]->getSupply();
		int price = soldProduct[i]->getPrice();
		int totalIncome = (supply - stock) * price;

		line = "> " + soldProduct[i]->getName() + " " + to_string(totalIncome) + " " + to_string((int)round(soldProduct[i]->getRating()));
		output << line << endl;
	}
}