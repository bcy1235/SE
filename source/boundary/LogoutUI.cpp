
#include "LogoutUI.h"

// 파일 출력을 위한 전역변수 끌어오기
extern std::ofstream out_fp;

/*
	함수 이름 : LogoutUI
	기능	  : 생성자
	전달 인자 : logout < 로그아웃 컨트롤 객체 주소값
	반환값    : 없음
*/
LogoutUI::LogoutUI(Logout* logout)
{
	this->logoutVar = logout;
}


/*
	함수 이름 : startInterface
	기능	  : 로그아웃 인터페이스 파일 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void LogoutUI::startInterface()
{
	out_fp << "2.2. 로그아웃\n> ";
}


/*
	함수 이름 : logout
	기능	  : 로그아웃 컨트롤 클래스 함수 호출 및 파일 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void LogoutUI::logout()
{
	std::string id = this->logoutVar->logout();
	out_fp << id;
}