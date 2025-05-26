
#include "Register.h"
#include "UserCollection.h"
#include "RegisterUI.h"


/*
	�Լ� �̸� : Register
	���	  : ������
	���� ���� : userCollection < ȸ�����Ե� ���� ������ �����ϴ� �迭
	��ȯ��    : ����
*/
Register::Register(UserCollection* userCollection)
{
	this->userCollection = userCollection;

	// ȸ������ �ٿ���� ��ü ���� �� �Լ� ȣ��
	RegisterUI* registerUI = new RegisterUI(NULL);
	registerUI->startInterface();

	delete registerUI;
}


/*
	�Լ� �̸� : addNewUser
	���	  : ���ο� ���� ���
	���� ���� : id < �� ������ id / password < �� ������ password / phoneNumber < �� ������ ��ȭ��ȣ
	��ȯ��    : ����
*/
void Register::addNewUser(std::string id, std::string password, std::string phoneNumber)
{
	this->userCollection->addNewUser(id, password, phoneNumber);
}


