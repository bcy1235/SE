#pragma once

#include "Session.h"

// �α׾ƿ� ��Ʈ�� Ŭ����
class Logout
{
private:
	Session* session; // ���� ����
public:
	Logout(Session* session); // ������
	std::string logout(); // �α׾ƿ�
};