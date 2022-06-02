#include <iostream>
#include "Product.h"

using namespace std;

Product::Product(string sellerID, string name, string company, int price, int supply, int stock) {
	this->sellerID = sellerID;
	this->name = name;
	this->company = company;
	this->price = price;
	this->supply = supply;
	this->stock = stock;
	this->rating = 0;
	this->numReview = 0;
	this->sumReview = 0;
}

void Product::purchaseProduct() {
	int stock = this->stock;
	this->stock = stock - 1;
}

string Product::getSellerID() {
	return this->sellerID;
};

string Product::getName() {
	return this->name;
};
string Product::getCompany() {
	return this->company;
};
int Product::getPrice() {
	return this->price;
};

int Product::getSupply() {
	return this->supply;
}

int Product::getStock() {
	return this->stock;
};
double Product::getRating() {
	return this->rating;
};

int Product::getNumReview() {
	return this->numReview;
}

int Product::getSumReview() {
	return this->sumReview;
}

void Product::setStock(int stock) {
	this->stock = stock;
}

void Product::setRating(double rating) {
	this->rating = rating;
}

void Product::addNumReview() {
	this->numReview = this->numReview + 1;
}

void Product::addSumReview(int review) {
	this->sumReview = this->sumReview + review;
}