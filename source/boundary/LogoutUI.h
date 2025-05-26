#pragma once

#include "header.h"
#include "Logout.h"

// 로그아웃 바운더리 클래스
class LogoutUI
{
private:
	Logout* logoutVar; // 로그아웃 컨트롤 클래스
public:
	LogoutUI(Logout* logout); // 생성자
	void startInterface(); // 파일 출력
	void logout(); // 로그아웃
};