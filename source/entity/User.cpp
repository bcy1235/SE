
#include "User.h"


/*
	�Լ� �̸� : User
	���	  : ������
	���� ���� : id < ������ ID / password < ������ �н����� / phoneNumber < ���� ��ȭ��ȣ
	��ȯ��    : ����
*/
User::User(std::string id, std::string password, std::string phoneNumber)
{
	this->id = id;
	this->password = password;
	this->phoneNumber = phoneNumber;
	this->numRental = 0;
}

/*
	�Լ� �̸� : getId
	���	  : ������ id ��ȯ
	���� ���� : ����
	��ȯ��    : ������ id
*/
std::string User::getId() {
	return this->id;
}

/*
	�Լ� �̸� : getPassword
	���	  : ������ password ��ȯ
	���� ���� : ����
	��ȯ��    : ������ password
*/
std::string User::getPassword()
{
	return this->password;
}

/*
	�Լ� �̸� : addBike
	���	  : ������ ������ �뿩
	���� ���� : bike < ������ ��ü �ּҰ�
	��ȯ��    : ����
*/
void User::addBike(Bike* bike)
{
	this->rentalList[this->numRental++] = bike;
}

/*
	�Լ� �̸� : getRentalList
	���	  : �뿩 ���� ��ȯ
	���� ���� : ����
	��ȯ��    : ������ ��ü �����͸� ��� �ִ� �迭 �ּҰ� ��ȯ
*/
Bike** User::getRentalList()
{
	return this->rentalList;
}

/*
	�Լ� �̸� : getNumRental
	���	  : �뿩 Ƚ�� ��ȯ
	���� ���� : ����
	��ȯ��    : ������ �뿩 Ƚ��
*/
int User::getNumRental()
{
	return this->numRental;
}