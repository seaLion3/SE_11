#include <iostream>
#include <fstream>
#include "PurchaseProductBoundary.h"

void PurchaseProductBoundary::printPurchaseProduct(Product* product) {
	ofstream output("output.txt", ios::app);
	string line;

	line = "> " + product->getSellerID() + " " + product->getName();

	output << "4.2. ��ǰ ����" << endl;
	output << line << endl;
}
