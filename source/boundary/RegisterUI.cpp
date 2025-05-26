#include "RegisterUI.h"
#include "header.h"

// 파일 출력을 위한 전역변수 끌어오기
extern std::ofstream out_fp;

/*
	함수 이름 : RegisterUI
	기능	  : 생성자
	전달 인자 : param < 회원가입 컨트롤 객체 주소값
	반환값    : 없음
*/
RegisterUI::RegisterUI(Register* param)
{
	this->registerControl = param;
}

/*
	함수 이름 : startInterface
	기능	  : 파일 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void RegisterUI::startInterface()
{
	out_fp << "1.1. 회원가입\n> ";
}

/*
	함수 이름 : registerUser
	기능	  : 회원가입 컨트롤 클래스 함수 호출 및 파일 출력
	전달 인자 : id < 회원가입할 유저의 id / password < 회원가입할 유저의 password / phoneNumber < 회원가입할 유저의 전화번호
	반환값    : 없음
*/
void RegisterUI::registerUser(std::string id, std::string password, std::string phoneNumber)
{
	registerControl->addNewUser(id, password, phoneNumber);
	out_fp << id << " " << password << " " << phoneNumber;
}
