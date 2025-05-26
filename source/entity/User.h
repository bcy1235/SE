#pragma once

#include "header.h"
#include "Bike.h"

// ����� ��ƼƼ Ŭ����
class User
{
private:
	std::string id; // ���̵�
	std::string password; // ��й�ȣ
	std::string phoneNumber; // ��ȭ��ȣ
	Bike* rentalList[MAX_NUM_BIKE]; // �뿩 ����Ʈ
	int numRental; // �뿩 Ƚ��

public:
	User(std::string id, std::string password, std::string phoneNumber); // ������
	void addBike(Bike* bike); // ������ �뿩
	Bike** getRentalList();   // �뿩 ���� ��ȸ 
	std::string getId();	// ���̵� ��ȯ
	std::string getPassword(); // �н����� ��ȯ
	int getNumRental(); // �뿩 Ƚ�� ��ȯ
};