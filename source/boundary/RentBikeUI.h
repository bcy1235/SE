#pragma once

#include "RentBike.h"

// 자전거 대여 바운더리 클래스
class RentBikeUI
{
private:
	RentBike* rentBikeVar; // 자전거 대여 컨트롤 클래스

public:
	RentBikeUI(RentBike* rentBike); // 생성자
	void startInterface(); // 파일 출력
	void rentBike(std::string id); // 자전거 대여

};