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

	vector<Product*> products = *productList->getProducts(); // ���� �Ǹ����� ��ü ��ǰ
	vector<Product*> sellingProducts; // �Ǹ����� ��ǰ�� ���� ���

	for (int i = 0; i < products.size(); i++) {
		if (products[i]->getSellerID() == id) {
			sellingProducts.push_back(products[i]);
		}
	}
	return sellingProducts;
}

Product* ProductList::getProduct(string name) {
	
	Product* searchResult;

	// ������ �̸��� Product ��ü �����͸� ã�Ƽ� ����
	for (int i = 0; i < (this->products).size(); i++) {
		if ((this->products[i]->getName() == name)) {
			searchResult = (this->products[i]);
			return searchResult;
		}
	}

	// �˻� ����� ������ NULL�� ����
	return NULL;
};

void ProductList::writeReview(UserAccount* user, string name, int review) {

	// �ش� ������ ���� ���
	vector<Product*> history = (user->getPurchaseHistory());

	// ��Ͽ��� �̸��� ������ ��ǰ�� ã��
	for (int i = 0; i < history.size(); i++) {
		if (history[i]->getName() == name) {
			history[i]->addNumReview();
			history[i]->addSumReview(review);
			int sumReview = history[i]->getSumReview(); // ���� ����
			int numReview = history[i]->getNumReview(); // �ı� �� ��� ��
			double rating = (double)sumReview / (double)numReview; // (����/�����) ���
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
			// �ش� ������ ����� ��ǰ�� supply != stock �� ���
			if (this->products[i]->getSupply() != this->products[i]->getStock())
				soldProductList.push_back(this->products[i]);
		}
	}
	return soldProductList;
}

extern ProductList* productList = new ProductList();
extern vector<Product*>* products = (productList->getProducts());