#pragma once

#include "header.h"
#include "Register.h"

// ȸ������ �ٿ���� Ŭ����
class RegisterUI
{
private:
	Register* registerControl; // ȸ������ ��Ʈ�� Ŭ����

public:
	RegisterUI(Register* param); // ������
	void startInterface(); // ���� ��� ��� �Լ�
	void registerUser(std::string id, std::string password, std::string phoneNumber); // ȸ������ 
};