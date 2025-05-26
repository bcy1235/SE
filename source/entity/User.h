#pragma once

#include "header.h"
#include "Bike.h"

// 사용자 엔티티 클래스
class User
{
private:
	std::string id; // 아이디
	std::string password; // 비밀번호
	std::string phoneNumber; // 전화번호
	Bike* rentalList[MAX_NUM_BIKE]; // 대여 리스트
	int numRental; // 대여 횟수

public:
	User(std::string id, std::string password, std::string phoneNumber); // 생성자
	void addBike(Bike* bike); // 자전거 대여
	Bike** getRentalList();   // 대여 정보 조회 
	std::string getId();	// 아이디 반환
	std::string getPassword(); // 패스워드 반환
	int getNumRental(); // 대여 횟수 반환
};