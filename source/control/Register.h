#pragma once

#include "header.h"

// 클래스 전방선언
class UserCollection;

// 회원가입 컨트롤 객체
class Register
{
private:
	UserCollection* userCollection; // 유저 집합

public:
	Register(UserCollection* userCollection); // 생성자
	void addNewUser(std::string id, std::string password, std::string phoneNumber); // 새로운 유저 회원가입
};

