#pragma once

#include "header.h"
#include "Logout.h"

// �α׾ƿ� �ٿ���� Ŭ����
class LogoutUI
{
private:
	Logout* logoutVar; // �α׾ƿ� ��Ʈ�� Ŭ����
public:
	LogoutUI(Logout* logout); // ������
	void startInterface(); // ���� ���
	void logout(); // �α׾ƿ�
};