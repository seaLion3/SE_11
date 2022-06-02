#include <iostream>
#include "ResignControl.h"
#include "ResignBoundary.h"

#include "entity.h"

using namespace std;

ResignControl::ResignControl() {
	// Boundary 생성
	ResignBoundary* resignBoundary = new ResignBoundary();

	// 현재 로그인된 아이디
	UserAccount* user = userAccountList->getCurrentlyLoggedIn();
	string id = user->getId();

	// 회원 탈퇴
	userAccountList->resign(id);

	// 결과 출력
	resignBoundary->printResign(id);
}