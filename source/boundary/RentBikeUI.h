#pragma once

#include "RentBike.h"

// ������ �뿩 �ٿ���� Ŭ����
class RentBikeUI
{
private:
	RentBike* rentBikeVar; // ������ �뿩 ��Ʈ�� Ŭ����

public:
	RentBikeUI(RentBike* rentBike); // ������
	void startInterface(); // ���� ���
	void rentBike(std::string id); // ������ �뿩

};