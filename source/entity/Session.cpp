
#include "Session.h"


/*
	�Լ� �̸� : Session
	���	  : ������
	���� ���� : ����
	��ȯ��    : ����
*/
Session::Session()
{
	this->isConnected = false;
	this->currentUserId = "";
}


/*
	�Լ� �̸� : connect
	���	  : ����� �α��� ����
	���� ���� : userId < �α����� ������� id
	��ȯ��    : ����
*/
void Session::connect(std::string userId)
{
	this->isConnected = true;
	this->currentUserId = userId;
}


/*
	�Լ� �̸� : disconnect
	���	  : �α����� ������� �α׾ƿ�
	���� ���� : ����
	��ȯ��    : �α׾ƿ��� ������� id
*/
std::string Session::disconnect()
{
	this->isConnected = false;
	return this->currentUserId;
}


/*
	�Լ� �̸� : getCurrentUserId
	���	  : ���� �α����� ������� id ��ȯ
	���� ���� : ����
	��ȯ��    : ���� �α����� ������� id
*/
std::string Session::getCurrentUserId()
{
	return this->currentUserId;
}