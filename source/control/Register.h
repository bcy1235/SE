#pragma once

#include "header.h"

// Ŭ���� ���漱��
class UserCollection;

// ȸ������ ��Ʈ�� ��ü
class Register
{
private:
	UserCollection* userCollection; // ���� ����

public:
	Register(UserCollection* userCollection); // ������
	void addNewUser(std::string id, std::string password, std::string phoneNumber); // ���ο� ���� ȸ������
};

