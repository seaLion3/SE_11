#include <iostream>

#include "SearchProductControl.h"
#include "SearchProductBoundary.h"
#include "entity.h"

using namespace std;

SearchProductControl::SearchProductControl(ifstream* in_fp) {
	SearchProductBoundary* searchProductBoundary = new SearchProductBoundary();
	

	// �Է�
	searchProductBoundary->searchProductUI(in_fp);
	string name = searchProductBoundary->getProductName();

	// �˻�
	Product* searchResult = productList->getProduct(name); // Product ��ü or NULL�� return


	// �˻���� ����
	if (searchResult != NULL) {
		UserAccount* currentUser = userAccountList->getCurrentlyLoggedIn(); // ���� �α��ε� ����
		currentUser->setSearchHistory(searchResult);
	}
	
	// ���
	searchProductBoundary->printSearchProduct(searchResult);
}
