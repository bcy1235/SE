#pragma once

#include "header.h"

// ������ ��ƼƼ Ŭ����
class Bike
{
private:
	std::string id; // ������ id
	std::string modelName; // ������ �𵨸�
	bool rented; // ���� �����Ű� �뿩�� ��������
public:
	Bike(std::string id, std::string modelName); // ������
	bool isRented(); // �뿩 �Ǿ����� ���� ��ȯ
	bool rent(); // �뿩
	std::string getId(); // id ��ȯ
	std::string getModelName(); // �𵨸� ��ȯ
};