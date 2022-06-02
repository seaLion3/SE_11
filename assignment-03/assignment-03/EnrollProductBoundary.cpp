#include <iostream>

#include "EnrollProductBoundary.h"

using namespace std;

void EnrollProductBoundary::enrollProductUI(ifstream* in_fp) {
	string name, company, price, stock;
	*in_fp >> name >> company >> price >> stock;
	this->setName(name);
	this->setCompany(company);
	this->setPrice(stoi(price));
	this->setStock(stoi(stock));
	this->setSupply(stoi(stock));
}

void EnrollProductBoundary::printEnrollProduct(string name, string company, int price, int stock) {
	ofstream output("output.txt", ios::app);
	string line = "> " + name + " " + company + " " + to_string(price) + " " + to_string(stock);
	output << "3.1. 판매 의류 등록" << endl;
	output << line << endl;
	output.close();
}

string EnrollProductBoundary::getSellerId() {
	return this->sellerId;
}

string EnrollProductBoundary::getName() {
	return this->name;
}

string EnrollProductBoundary::getCompany() {
	return this->company;
}

int EnrollProductBoundary::getPrice() {
	return this->price;
}

int EnrollProductBoundary::getSupply() {
	return this->supply;
}

int EnrollProductBoundary::getStock() {
	return this->stock;
}

void EnrollProductBoundary::setSellerId(string sellerId) {
	this->sellerId = sellerId;
}

void EnrollProductBoundary::setName(string name) {
	this->name = name;
}

void EnrollProductBoundary::setCompany(string company) {
	this->company = company;
}

void EnrollProductBoundary::setPrice(int price) {
	this->price = price;
}

void EnrollProductBoundary::setSupply(int supply) {
	this->supply = supply;
}

void EnrollProductBoundary::setStock(int stock) {
	this->stock = stock;
}