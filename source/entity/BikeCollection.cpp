
#include "BikeCollection.h"


/*
	�Լ� �̸� : BikeCollection
	���	  : ������
	���� ���� : ����
	��ȯ��    : ����
*/
BikeCollection::BikeCollection()
{
	this->countBike = 0;
}


/*
	�Լ� �̸� : addNewBike
	���	  : �ű� ������ ���
	���� ���� : id < ���� ����� �������� id / modelName < ���� ����� �������� �𵨸�
	��ȯ��    : ��� ���� ���� ����
*/
bool BikeCollection::addNewBike(std::string id, std::string modelName)
{
	this->registeredBike[this->countBike++] = new Bike(id, modelName);
	return true;
}


/*
	�Լ� �̸� : findBike
	���	  : ��ϵ� ������ ã��
	���� ���� : id < ã�� �������� id
	��ȯ��    : �ش��ϴ� �������� ��ü ������, ���� �������� ���� ��� NULL ��ȯ
*/
Bike* BikeCollection::findBike(std::string id)
{
	// ��ϵ� ��� �����ſ� ���Ͽ�
	for (int i = 0; i < this->countBike; ++i)
	{
		// id�� ��ġ�Ѵٸ� �ش� ��ü �ּҰ� ��ȯ
		if (this->registeredBike[i]->getId() == id)
		{
			return this->registeredBike[i];
		}
	}
	// ��ġ�ϴ� �����Ű� ����
	return NULL;
}