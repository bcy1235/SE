#pragma once

#include "header.h"
#include "Register.h"
#include "User.h"

// User�� ��� �ִ� �÷��� Ŭ����
class UserCollection
{
private:
	User* registeredUser[MAX_NUM_USER]; // User ������ �迭
	int countUser;						// ����� User�� ��

public:
	UserCollection();	// ������
	void addNewUser(std::string id, std::string password, std::string phoneNumber);	// ���ο� ���� ���
	bool isValidUser(std::string id, std::string password);	// ��ȿ�� User���� Ȯ��
	User* findUser(std::string id);	// id�� �ش��ϴ� User�� ã�� �ּҰ� ��ȯ
};