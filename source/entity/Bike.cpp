
#include "Bike.h"



/*
	함수 이름 : Bike
	기능	  : 생성자
	전달 인자 : 없음
	반환값    : 없음
*/
Bike::Bike(std::string id, std::string modelName)
{
	this->id = id;
	this->modelName = modelName;
	this->rented = false;
}


/*
	함수 이름 : isRented
	기능	  : 대여 여부 반환
	전달 인자 : 없음
	반환값    : 대여 여부
*/
bool Bike::isRented()
{
	return this->rented;
}


/*
	함수 이름 : rent
	기능	  : 자전거 대여
	전달 인자 : 없음
	반환값    : 대여 성공 여부
*/
bool Bike::rent()
{
	this->rented = true;
	return true;
}


/*
	함수 이름 : getId
	기능	  : 자전거 id 반환
	전달 인자 : 없음
	반환값    : 자전거 id
*/
std::string Bike::getId()
{
	return this->id;
}


/*
	함수 이름 : getModelName
	기능	  : 자전거 모델명 반환
	전달 인자 : 없음
	반환값    : 자전거 모델명
*/
std::string Bike::getModelName()
{
	return this->modelName;
}