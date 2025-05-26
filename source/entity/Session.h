#pragma once


#include "header.h"

// ���� ��ƼƼ Ŭ����
class Session
{
private:
	std::string currentUserId; // ���� �α����� ����� id
	bool isConnected; // ���� �α����� ����ڰ� �����ϴ���
public:
	Session(); // ������
	void connect(std::string userId); // �α��� ����
	std::string disconnect(); // �α׾ƿ�
	std::string getCurrentUserId(); // ���� ����� id ��ȯ
};