
#include "Logout.h"
#include "LogoutUI.h"


/*
	�Լ� �̸� : Logout
	���	  : ������
	���� ���� : session
	��ȯ��    : ����
*/
Logout::Logout(Session* session)
{
	this->session = session;
	LogoutUI* logoutUI = new LogoutUI(NULL);
	logoutUI->startInterface();

	delete logoutUI;
}


/*
	�Լ� �̸� : logout
	���	  : �α׾ƿ�
	���� ���� : ����
	��ȯ��    : �α׾ƿ��� ������ ���̵�
*/
std::string Logout::logout()
{
	return this->session->disconnect();
}