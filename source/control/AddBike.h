#pragma once


#include "BikeCollection.h"

// 자전거 등록 컨트롤 클래스
class AddBike
{
private:
	BikeCollection* bikeCollection; // 자전거 집합
public:
	AddBike(BikeCollection* bikeCollection); // 생성자
	bool addNewBike(std::string id, std::string modelName); // 자전거 등록

};