
#include "AddBike.h"
#include "AddBikeUI.h"


/*
	�Լ� �̸� : AddBike
	���	  : ������
	���� ���� : bikeCollection < ��ϵ� ������ ����
	��ȯ��    : ����
*/
AddBike::AddBike(BikeCollection* bikeCollection)
{
	this->bikeCollection = bikeCollection;

	// ������ ��� �ٿ���� ��ü ���� �� �Լ� ȣ��
	AddBikeUI* addBikeUI = new AddBikeUI(NULL);
	addBikeUI->startInterface();

	delete addBikeUI;
}


/*
	�Լ� �̸� : addNewBike
	���	  : ������ ���
	���� ���� : id < ���� ����Ϸ��� �������� id / modelName < ���� ����Ϸ��� �������� �𵨸�
	��ȯ��    : ��� ���� ����
*/
bool AddBike::addNewBike(std::string id, std::string modelName)
{
	return this->bikeCollection->addNewBike(id, modelName);
}