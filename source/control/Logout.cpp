
#include "Logout.h"
#include "LogoutUI.h"


/*
	함수 이름 : Logout
	기능	  : 생성자
	전달 인자 : session
	반환값    : 없음
*/
Logout::Logout(Session* session)
{
	this->session = session;
	LogoutUI* logoutUI = new LogoutUI(NULL);
	logoutUI->startInterface();

	delete logoutUI;
}


/*
	함수 이름 : logout
	기능	  : 로그아웃
	전달 인자 : 없음
	반환값    : 로그아웃한 유저의 아이디
*/
std::string Logout::logout()
{
	return this->session->disconnect();
}