#pragma once

#include "header.h"
#include "UserCollection.h"
#include "Login.h"

// 로그인 바운더리 클래스
class LoginUI
{
private:
	Login* loginVar; // 로그인 컨트롤 클래스

public:
	LoginUI(Login* login); // 생성자
	void startInterface(); // 파일 출력
	void login(std::string id, std::string password); // 로그인 연계
};