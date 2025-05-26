

#include "RentBikeUI.h"
#include "RentBike.h"
#include "Bike.h"



/*
	�Լ� �̸� : RentBike
	���	  : ������
	���� ���� : bikeCollection < ���� ��ϵ� ��� ������ ���� / userCollection < ���� ȸ�����Ե� ��� ���� ���� / session < ���� ���� ����
	��ȯ��    : ����
*/
RentBike::RentBike(BikeCollection* bikeCollection, UserCollection* userCollection, Session* session)
{
	this->bikeCollection = bikeCollection;
	this->userCollection = userCollection;
	this->session = session;

	// �ٿ���� Ŭ���� ���� �� �Լ� ȣ��
	RentBikeUI* rentBikeUI = new RentBikeUI(NULL);
	rentBikeUI->startInterface();

	delete rentBikeUI;
}


/*
	�Լ� �̸� : rentBike
	���	  : ������ �뿩
	���� ���� : id < �뿩�� �������� id
	��ȯ��    : �뿩�� ������ ��ü ������, ���� �ش� �����Ű� �̹� �뿩 �Ǿ��� ��� NULL �� ��ȯ
*/
Bike* RentBike::rentBike(std::string id)
{
	// ������ ã��
	Bike* bike = this->bikeCollection->findBike(id);
	// ���� �α����� ������� id ã��
	std::string userId = this->session->getCurrentUserId();
	
	// �����Ű� ���� �뿩���� �ʾ���
	if (!bike->isRented())
	{
		// ������ �뿩
		bike->rent();
		// ���� �α����� ���� ã��
		User* user = this->userCollection->findUser(userId);
		// �ش� ������ ������ �뿩 ����
		user->addBike(bike);

		return bike;
	}
	// �����Ű� �̹� �뿩��
	else
	{
		return NULL;
	}
}