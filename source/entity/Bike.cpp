
#include "Bike.h"



/*
	�Լ� �̸� : Bike
	���	  : ������
	���� ���� : ����
	��ȯ��    : ����
*/
Bike::Bike(std::string id, std::string modelName)
{
	this->id = id;
	this->modelName = modelName;
	this->rented = false;
}


/*
	�Լ� �̸� : isRented
	���	  : �뿩 ���� ��ȯ
	���� ���� : ����
	��ȯ��    : �뿩 ����
*/
bool Bike::isRented()
{
	return this->rented;
}


/*
	�Լ� �̸� : rent
	���	  : ������ �뿩
	���� ���� : ����
	��ȯ��    : �뿩 ���� ����
*/
bool Bike::rent()
{
	this->rented = true;
	return true;
}


/*
	�Լ� �̸� : getId
	���	  : ������ id ��ȯ
	���� ���� : ����
	��ȯ��    : ������ id
*/
std::string Bike::getId()
{
	return this->id;
}


/*
	�Լ� �̸� : getModelName
	���	  : ������ �𵨸� ��ȯ
	���� ���� : ����
	��ȯ��    : ������ �𵨸�
*/
std::string Bike::getModelName()
{
	return this->modelName;
}