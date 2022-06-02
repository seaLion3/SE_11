#include <iostream>
#include "entity.h"

using namespace std;

void ProductList::enrollProduct(string sellerID, string name, string company, int price, int supply, int stock) {
	products.push_back(new Product(sellerID, name, company, price, supply, stock));
}

vector<Product*>* ProductList::getProducts() {
	return &(this->products);
}

vector<Product*> ProductList::getSellingProducts(string id) {

	vector<Product*> products = *productList->getProducts(); // 현재 판매중인 전체 상품
	vector<Product*> sellingProducts; // 판매자의 상품만 담을 목록

	for (int i = 0; i < products.size(); i++) {
		if (products[i]->getSellerID() == id) {
			sellingProducts.push_back(products[i]);
		}
	}
	return sellingProducts;
}

Product* ProductList::getProduct(string name) {
	
	Product* searchResult;

	// 동일한 이름의 Product 객체 포인터를 찾아서 리턴
	for (int i = 0; i < (this->products).size(); i++) {
		if ((this->products[i]->getName() == name)) {
			searchResult = (this->products[i]);
			return searchResult;
		}
	}

	// 검색 결과가 없으면 NULL을 리턴
	return NULL;
};

void ProductList::writeReview(UserAccount* user, string name, int review) {

	// 해당 유저의 구매 목록
	vector<Product*> history = (user->getPurchaseHistory());

	// 목록에서 이름이 동일한 상품을 찾음
	for (int i = 0; i < history.size(); i++) {
		if (history[i]->getName() == name) {
			history[i]->addNumReview();
			history[i]->addSumReview(review);
			int sumReview = history[i]->getSumReview(); // 평점 총합
			int numReview = history[i]->getNumReview(); // 후기 쓴 사람 수
			double rating = (double)sumReview / (double)numReview; // (총합/사람수) 평균
			history[i]->setRating(rating);
		}
	}
}

vector<Product*> ProductList::getSoldOutProducts(string id) {
	vector<Product*> soldOutList;
	for (int i = 0; i < this->products.size(); i++) {
		if (this->products[i]->getSellerID() == id) {
			if (this->products[i]->getStock() == 0) {
				soldOutList.push_back(this->products[i]);
			}
		}
	}
	return soldOutList;
}

vector<Product*> ProductList::getSoldProducts(string id) {
	vector<Product*> soldProductList;
	for (int i = 0; i < this->products.size(); i++) {
		if (this->products[i]->getSellerID() == id) {
			// 해당 유저가 등록한 상품의 supply != stock 인 경우
			if (this->products[i]->getSupply() != this->products[i]->getStock())
				soldProductList.push_back(this->products[i]);
		}
	}
	return soldProductList;
}

extern ProductList* productList = new ProductList();
extern vector<Product*>* products = (productList->getProducts());