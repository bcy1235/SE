
#include "Session.h"


/*
	함수 이름 : Session
	기능	  : 생성자
	전달 인자 : 없음
	반환값    : 없음
*/
Session::Session()
{
	this->isConnected = false;
	this->currentUserId = "";
}


/*
	함수 이름 : connect
	기능	  : 사용자 로그인 연결
	전달 인자 : userId < 로그인한 사용자의 id
	반환값    : 없음
*/
void Session::connect(std::string userId)
{
	this->isConnected = true;
	this->currentUserId = userId;
}


/*
	함수 이름 : disconnect
	기능	  : 로그인한 사용자의 로그아웃
	전달 인자 : 없음
	반환값    : 로그아웃한 사용자의 id
*/
std::string Session::disconnect()
{
	this->isConnected = false;
	return this->currentUserId;
}


/*
	함수 이름 : getCurrentUserId
	기능	  : 현재 로그인한 사용자의 id 반환
	전달 인자 : 없음
	반환값    : 현재 로그인한 사용자의 id
*/
std::string Session::getCurrentUserId()
{
	return this->currentUserId;
}