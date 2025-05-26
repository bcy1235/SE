
#include "LogoutUI.h"

// ���� ����� ���� �������� �������
extern std::ofstream out_fp;

/*
	�Լ� �̸� : LogoutUI
	���	  : ������
	���� ���� : logout < �α׾ƿ� ��Ʈ�� ��ü �ּҰ�
	��ȯ��    : ����
*/
LogoutUI::LogoutUI(Logout* logout)
{
	this->logoutVar = logout;
}


/*
	�Լ� �̸� : startInterface
	���	  : �α׾ƿ� �������̽� ���� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void LogoutUI::startInterface()
{
	out_fp << "2.2. �α׾ƿ�\n> ";
}


/*
	�Լ� �̸� : logout
	���	  : �α׾ƿ� ��Ʈ�� Ŭ���� �Լ� ȣ�� �� ���� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void LogoutUI::logout()
{
	std::string id = this->logoutVar->logout();
	out_fp << id;
}