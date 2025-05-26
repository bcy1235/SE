#pragma once

#include "Session.h"

// 로그아웃 컨트롤 클래스
class Logout
{
private:
	Session* session; // 세션 정보
public:
	Logout(Session* session); // 생성자
	std::string logout(); // 로그아웃
};