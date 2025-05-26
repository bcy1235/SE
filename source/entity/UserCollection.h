#pragma once

#include "header.h"
#include "Register.h"
#include "User.h"

// User를 담고 있는 컬렉션 클래스
class UserCollection
{
private:
	User* registeredUser[MAX_NUM_USER]; // User 포인터 배열
	int countUser;						// 저장된 User의 수

public:
	UserCollection();	// 생성자
	void addNewUser(std::string id, std::string password, std::string phoneNumber);	// 새로운 유저 등록
	bool isValidUser(std::string id, std::string password);	// 유효한 User인지 확인
	User* findUser(std::string id);	// id에 해당하는 User를 찾아 주소값 반환
};