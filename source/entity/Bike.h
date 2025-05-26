#pragma once

#include "header.h"

// 자전거 엔티티 클래스
class Bike
{
private:
	std::string id; // 자전거 id
	std::string modelName; // 자전거 모델명
	bool rented; // 현재 자전거가 대여된 상태인지
public:
	Bike(std::string id, std::string modelName); // 생성자
	bool isRented(); // 대여 되었는지 여부 반환
	bool rent(); // 대여
	std::string getId(); // id 반환
	std::string getModelName(); // 모델명 반환
};