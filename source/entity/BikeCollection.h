#pragma once

#include "header.h"
#include "Bike.h"

// ������ ���� ��ƼƼ Ŭ����
class BikeCollection
{
private:
	Bike* registeredBike[MAX_NUM_BIKE]; // ������ ��ü ������ �迭
	int countBike; // ������ ����
public:
	BikeCollection(); // ������
	bool addNewBike(std::string id, std::string modelName); // ������ �߰� ���
	Bike* findBike(std::string id); // ������ ã��
};