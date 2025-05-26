
#include "Login.h"
#include "LoginUI.h"


/*
	함수 이름 : Login
	기능	  : 생성자
	전달 인자 : userCollection < 회원가입된 유저 리스트 / session < 세션 정보
	반환값    : 없음
*/
Login::Login(UserCollection* userCollection, Session* session)
{
	this->userCollection = userCollection;
	this->session = session;

	// 로그인 바운더리 객체 생성 후 함수 호출
	LoginUI* loginUI = new LoginUI(NULL);
	loginUI->startInterface();

	delete loginUI;
}


/*
	함수 이름 : login
	기능	  : 로그인
	전달 인자 : id < 로그인 시도 id / password < 로그인 시도 패스워드
	반환값    : 로그인 성공 여부
*/
bool Login::login(std::string id, std::string password)
{
	if (this->userCollection->isValidUser(id, password))
	{
		this->session->connect(id);
		return true;
	}
	else
	{
		return false;
	}
}