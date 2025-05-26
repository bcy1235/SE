
#include "User.h"


/*
	함수 이름 : User
	기능	  : 생성자
	전달 인자 : id < 유저의 ID / password < 유저의 패스워드 / phoneNumber < 유저 전화번호
	반환값    : 없음
*/
User::User(std::string id, std::string password, std::string phoneNumber)
{
	this->id = id;
	this->password = password;
	this->phoneNumber = phoneNumber;
	this->numRental = 0;
}

/*
	함수 이름 : getId
	기능	  : 유저의 id 반환
	전달 인자 : 없음
	반환값    : 유저의 id
*/
std::string User::getId() {
	return this->id;
}

/*
	함수 이름 : getPassword
	기능	  : 유저의 password 반환
	전달 인자 : 없음
	반환값    : 유저의 password
*/
std::string User::getPassword()
{
	return this->password;
}

/*
	함수 이름 : addBike
	기능	  : 유저의 자전거 대여
	전달 인자 : bike < 자전거 객체 주소값
	반환값    : 없음
*/
void User::addBike(Bike* bike)
{
	this->rentalList[this->numRental++] = bike;
}

/*
	함수 이름 : getRentalList
	기능	  : 대여 정보 반환
	전달 인자 : 없음
	반환값    : 자전거 객체 포인터를 담고 있는 배열 주소값 반환
*/
Bike** User::getRentalList()
{
	return this->rentalList;
}

/*
	함수 이름 : getNumRental
	기능	  : 대여 횟수 반환
	전달 인자 : 없음
	반환값    : 유저의 대여 횟수
*/
int User::getNumRental()
{
	return this->numRental;
}