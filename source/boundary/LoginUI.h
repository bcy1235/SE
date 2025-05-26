#pragma once

#include "header.h"
#include "UserCollection.h"
#include "Login.h"

// �α��� �ٿ���� Ŭ����
class LoginUI
{
private:
	Login* loginVar; // �α��� ��Ʈ�� Ŭ����

public:
	LoginUI(Login* login); // ������
	void startInterface(); // ���� ���
	void login(std::string id, std::string password); // �α��� ����
};