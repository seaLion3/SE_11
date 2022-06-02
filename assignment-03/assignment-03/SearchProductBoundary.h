#pragma once
#include <iostream>
#include "ProductList.h"

using namespace std;

class SearchProductBoundary {
	private:
		string productName;

	public:
		void searchProductUI(ifstream* in_fp);
		void printSearchProduct(Product* searchResult);

		string getProductName();
		void setProductName(string productName);
};