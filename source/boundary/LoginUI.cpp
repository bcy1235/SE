
#include "LoginUI.h"

// ���� ����� ���� �������� extern
extern std::ofstream out_fp;

/*
	�Լ� �̸� : LoginUI
	���	  : ������
	���� ���� : login < �α��� ��Ʈ�� ��ü �ּҰ�
	��ȯ��    : ����
*/
LoginUI::LoginUI( Login* login)
{
	this->loginVar = login;
}

/*
	�Լ� �̸� : startInterface
	���	  : �α��� �޴� ���� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void LoginUI::startInterface()
{
	out_fp << "2.1. �α���\n> ";
}

/*
	�Լ� �̸� : login
	���	  : �α��� ���� ���
	���� ���� : id < �α��� �õ� id / password < �α��� �õ� password
	��ȯ��    : ����
*/
void LoginUI::login(std::string id, std::string password)
{
	// ��ȿ�� ����ڶ��
	if (this->loginVar->login(id, password))
	{
		out_fp << id << " " << password;
	}
	// ��ȿ���� ���� ����ڶ�� ��� ���
	else
	{
		out_fp << "WARN :: unvalid user";
	}
}