#pragma once


#include "BikeCollection.h"

// ������ ��� ��Ʈ�� Ŭ����
class AddBike
{
private:
	BikeCollection* bikeCollection; // ������ ����
public:
	AddBike(BikeCollection* bikeCollection); // ������
	bool addNewBike(std::string id, std::string modelName); // ������ ���

};