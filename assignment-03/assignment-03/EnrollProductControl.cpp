#include <iostream>
#include <vector>

#include "EnrollProductControl.h"
#include "Entity.h"
#include "Boundary.h"


using namespace std;

EnrollProductControl::EnrollProductControl(ifstream* in_fp) {
	EnrollProductBoundary* enrollProductBoundary = new EnrollProductBoundary();
	string sellerId = userAccountList->getCurrentlyLoggedIn()->getId();

	// �Է�
	enrollProductBoundary->enrollProductUI(in_fp);

	string name = enrollProductBoundary->getName();
	string company = enrollProductBoundary->getCompany();
	int price = enrollProductBoundary->getPrice();
	int supply = enrollProductBoundary->getSupply();
	int stock = enrollProductBoundary->getStock();

	// ���
	productList->enrollProduct(sellerId, name, company, price, supply, stock);

	// ���
	enrollProductBoundary->printEnrollProduct(name, company, price, stock);
}