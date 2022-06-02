#pragma once

#include <iostream>
#include <vector>
#include "entity.h"
using namespace std;

class PurchaseHistoryBoundary {
	public:
		void printPurchaseHistory(vector<Product*> history);
};