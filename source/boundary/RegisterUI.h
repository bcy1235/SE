#pragma once

#include "header.h"
#include "Register.h"

// 회원가입 바운더리 클래스
class RegisterUI
{
private:
	Register* registerControl; // 회원가입 컨트롤 클래스

public:
	RegisterUI(Register* param); // 생성자
	void startInterface(); // 파일 출력 담당 함수
	void registerUser(std::string id, std::string password, std::string phoneNumber); // 회원가입 
};