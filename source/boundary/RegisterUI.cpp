#include "RegisterUI.h"
#include "header.h"

// ���� ����� ���� �������� �������
extern std::ofstream out_fp;

/*
	�Լ� �̸� : RegisterUI
	���	  : ������
	���� ���� : param < ȸ������ ��Ʈ�� ��ü �ּҰ�
	��ȯ��    : ����
*/
RegisterUI::RegisterUI(Register* param)
{
	this->registerControl = param;
}

/*
	�Լ� �̸� : startInterface
	���	  : ���� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void RegisterUI::startInterface()
{
	out_fp << "1.1. ȸ������\n> ";
}

/*
	�Լ� �̸� : registerUser
	���	  : ȸ������ ��Ʈ�� Ŭ���� �Լ� ȣ�� �� ���� ���
	���� ���� : id < ȸ�������� ������ id / password < ȸ�������� ������ password / phoneNumber < ȸ�������� ������ ��ȭ��ȣ
	��ȯ��    : ����
*/
void RegisterUI::registerUser(std::string id, std::string password, std::string phoneNumber)
{
	registerControl->addNewUser(id, password, phoneNumber);
	out_fp << id << " " << password << " " << phoneNumber;
}
