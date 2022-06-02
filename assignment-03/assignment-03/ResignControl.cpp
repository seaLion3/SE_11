#include <iostream>
#include "ResignControl.h"
#include "ResignBoundary.h"

#include "entity.h"

using namespace std;

ResignControl::ResignControl() {
	// Boundary ����
	ResignBoundary* resignBoundary = new ResignBoundary();

	// ���� �α��ε� ���̵�
	UserAccount* user = userAccountList->getCurrentlyLoggedIn();
	string id = user->getId();

	// ȸ�� Ż��
	userAccountList->resign(id);

	// ��� ���
	resignBoundary->printResign(id);
}