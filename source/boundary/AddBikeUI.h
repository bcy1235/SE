#pragma once

#include "AddBike.h"

// 자전거 등록 바운더리 클래스
class AddBikeUI
{
private:
	AddBike* addBike; // 자전거 등록 컨트롤 클래스

public:
	AddBikeUI(AddBike* addBike); // 생성자
	void startInterface(); // 파일 출력
	void registerBike(std::string id, std::string modelName); // 자전거 등록 연계
};