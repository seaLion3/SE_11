#include <iostream>

#include "SearchProductControl.h"
#include "SearchProductBoundary.h"
#include "entity.h"

using namespace std;

SearchProductControl::SearchProductControl(ifstream* in_fp) {
	SearchProductBoundary* searchProductBoundary = new SearchProductBoundary();
	

	// 입력
	searchProductBoundary->searchProductUI(in_fp);
	string name = searchProductBoundary->getProductName();

	// 검색
	Product* searchResult = productList->getProduct(name); // Product 객체 or NULL을 return


	// 검색기록 저장
	if (searchResult != NULL) {
		UserAccount* currentUser = userAccountList->getCurrentlyLoggedIn(); // 현재 로그인된 유저
		currentUser->setSearchHistory(searchResult);
	}
	
	// 출력
	searchProductBoundary->printSearchProduct(searchResult);
}
