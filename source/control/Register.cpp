
#include "Register.h"
#include "UserCollection.h"
#include "RegisterUI.h"


/*
	함수 이름 : Register
	기능	  : 생성자
	전달 인자 : userCollection < 회원가입된 유저 정보를 유지하는 배열
	반환값    : 없음
*/
Register::Register(UserCollection* userCollection)
{
	this->userCollection = userCollection;

	// 회원가입 바운더리 객체 생성 및 함수 호출
	RegisterUI* registerUI = new RegisterUI(NULL);
	registerUI->startInterface();

	delete registerUI;
}


/*
	함수 이름 : addNewUser
	기능	  : 새로운 유저 등록
	전달 인자 : id < 새 유저의 id / password < 새 유저의 password / phoneNumber < 새 유저의 전화번호
	반환값    : 없음
*/
void Register::addNewUser(std::string id, std::string password, std::string phoneNumber)
{
	this->userCollection->addNewUser(id, password, phoneNumber);
}


