#include <iostream>
#include <fstream>
#include <algorithm>

#include "PurchaseHistoryBoundary.h"
#include "entity.h"

using namespace std;

bool cmp(Product* a, Product* b) {
	return a->getName() < b->getName();
}

void PurchaseHistoryBoundary::printPurchaseHistory(vector<Product*> history) {
	
	sort(history.begin(), history.end(), cmp);

	ofstream output("output.txt", ios::app);
	string line;

	output << "4.3. 상품 구매 내역 조회" << endl;

	for (int i = 0; i < history.size(); i++) {
		Product* prod = history[i];
		line = "> " + prod->getSellerID() + " " + prod->getName() + " " + prod->getCompany() + " " + to_string(prod->getPrice())
			+ " " + to_string(prod->getStock()) + " " + to_string((int)round(prod->getRating()));
		output << line << endl;
	}
}