#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "entity.h"

using namespace std;

class EnrollProductBoundary {
	private:
		string sellerId;
		string name;
		string company;
		int price;
		int supply;
		int stock;

	public:
		void enrollProductUI(ifstream* in_fp);
		void printEnrollProduct(string name, string company, int price, int stock);

		string getSellerId();
		string getName();
		string getCompany();
		int getPrice();
		int getSupply();
		int getStock();

		void setSellerId(string sellerId);
		void setName(string name);
		void setCompany(string company);
		void setPrice(int price);
		void setSupply(int supply);
		void setStock(int stock);
};