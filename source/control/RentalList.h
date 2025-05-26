#pragma once


#include "UserCollection.h"
#include "Session.h"

// 대여 정보 조회 컨트롤 클래스
class RentalList
{
private:
	UserCollection* userCollection; // 유저 집합
	Session* session; // 세션

public:
	RentalList(UserCollection* userCollection, Session* session); // 생성자

};