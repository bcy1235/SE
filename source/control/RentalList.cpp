
#include "RentalListUI.h"
#include <algorithm>


/*
	�Լ� �̸� : RentalList
	���	  : ������
	���� ���� : userCollection < ȸ�����Ե� ��� ���� ���� / session < ���� ����
	��ȯ��    : ����
*/
RentalList::RentalList(UserCollection* userCollection, Session* session)
{
	this->userCollection = userCollection;
	this->session = session;

	// ���� �α����� ������� id ��������
	std::string userId = session->getCurrentUserId();
	// �ش� id�� �´� ���� ��ü ������ ��������
	User* user = userCollection->findUser(userId);

	// �ش� ������ ������ �뿩 ����Ʈ �� Ƚ�� �̾ƿ���
	Bike** rentalList = user->getRentalList();
	int numRental = user->getNumRental();

	// ������ id�� �������� �������� ����
	std::sort(rentalList, rentalList + numRental, [](Bike* a, Bike* b) {
		return a->getId() < b->getId();
		});

	// ������ �뿩 ���� ��ȸ �ٿ���� ��ü ���� �� �Լ� ȣ��
	RentalListUI* rentalListUI = new RentalListUI();
	rentalListUI->startInterface(rentalList, numRental);

	delete rentalListUI;
}