
#include "Login.h"
#include "LoginUI.h"


/*
	�Լ� �̸� : Login
	���	  : ������
	���� ���� : userCollection < ȸ�����Ե� ���� ����Ʈ / session < ���� ����
	��ȯ��    : ����
*/
Login::Login(UserCollection* userCollection, Session* session)
{
	this->userCollection = userCollection;
	this->session = session;

	// �α��� �ٿ���� ��ü ���� �� �Լ� ȣ��
	LoginUI* loginUI = new LoginUI(NULL);
	loginUI->startInterface();

	delete loginUI;
}


/*
	�Լ� �̸� : login
	���	  : �α���
	���� ���� : id < �α��� �õ� id / password < �α��� �õ� �н�����
	��ȯ��    : �α��� ���� ����
*/
bool Login::login(std::string id, std::string password)
{
	if (this->userCollection->isValidUser(id, password))
	{
		this->session->connect(id);
		return true;
	}
	else
	{
		return false;
	}
}