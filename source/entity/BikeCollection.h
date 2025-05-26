#pragma once

#include "header.h"
#include "Bike.h"

// 자전거 집합 엔티티 클래스
class BikeCollection
{
private:
	Bike* registeredBike[MAX_NUM_BIKE]; // 자전거 객체 포인터 배열
	int countBike; // 자전거 개수
public:
	BikeCollection(); // 생성자
	bool addNewBike(std::string id, std::string modelName); // 자전거 추가 등록
	Bike* findBike(std::string id); // 자전거 찾기
};