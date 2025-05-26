
#include "LoginUI.h"

// 파일 출력을 위한 전역변수 extern
extern std::ofstream out_fp;

/*
	함수 이름 : LoginUI
	기능	  : 생성자
	전달 인자 : login < 로그인 컨트롤 객체 주소값
	반환값    : 없음
*/
LoginUI::LoginUI( Login* login)
{
	this->loginVar = login;
}

/*
	함수 이름 : startInterface
	기능	  : 로그인 메뉴 파일 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void LoginUI::startInterface()
{
	out_fp << "2.1. 로그인\n> ";
}

/*
	함수 이름 : login
	기능	  : 로그인 연계 기능
	전달 인자 : id < 로그인 시도 id / password < 로그인 시도 password
	반환값    : 없음
*/
void LoginUI::login(std::string id, std::string password)
{
	// 유효한 사용자라면
	if (this->loginVar->login(id, password))
	{
		out_fp << id << " " << password;
	}
	// 유효하지 않은 사용자라면 경고 출력
	else
	{
		out_fp << "WARN :: unvalid user";
	}
}