#pragma once

#include "UserCollection.h"
#include "Session.h"

// 로그인 컨트롤 클래스
class Login
{
private:
	UserCollection* userCollection; // 유저 집합
	Session* session; // 세션
public:
	Login(UserCollection* userCollection, Session* session); // 생성자
	bool login(std::string id, std::string password); // 로그인
};