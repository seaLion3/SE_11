#include <iostream>
#include <fstream>
#include "SoldOutProductBoundary.h"

using namespace std;

void SoldOutProductBoundary::printSoldOutProduct(vector<Product*> soldOutList) {
	ofstream output("output.txt", ios::app);
	string line;

	output << "3.3. 판매 완료 상품 조회" << endl;
	for (int i = 0; i < soldOutList.size(); i++) {
		Product* prod = soldOutList[i];
		line = "> " + prod->getName() + " " + prod->getCompany() + " " + to_string(prod->getPrice()) + " " +
			to_string(prod->getStock()) + " " + to_string((int)round(prod->getRating()));
		output << line << endl;
	}
}