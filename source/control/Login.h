#pragma once

#include "UserCollection.h"
#include "Session.h"

// �α��� ��Ʈ�� Ŭ����
class Login
{
private:
	UserCollection* userCollection; // ���� ����
	Session* session; // ����
public:
	Login(UserCollection* userCollection, Session* session); // ������
	bool login(std::string id, std::string password); // �α���
};