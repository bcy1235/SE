#pragma once

#include "AddBike.h"

// ������ ��� �ٿ���� Ŭ����
class AddBikeUI
{
private:
	AddBike* addBike; // ������ ��� ��Ʈ�� Ŭ����

public:
	AddBikeUI(AddBike* addBike); // ������
	void startInterface(); // ���� ���
	void registerBike(std::string id, std::string modelName); // ������ ��� ����
};