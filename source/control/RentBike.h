#pragma once

#include "header.h"
#include "BikeCollection.h"
#include "Session.h"
#include "UserCollection.h"

// 클래스 전방선언
class UserCollection;
class Session;

// 자전거 대여 컨트롤 클래스
class RentBike
{
private:
	BikeCollection* bikeCollection; // 자전거 집합
	UserCollection* userCollection; // 유저 집합
	Session* session; // 세션
public:
	RentBike(BikeCollection* bikeCollection, UserCollection* userCollection, Session* session); // 생성자
	Bike* rentBike(std::string id); // 자전거 대여

};