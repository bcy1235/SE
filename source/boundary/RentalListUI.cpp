
#include "RentalListUI.h"
#include "header.h"

// 파일 출력을 위한 전역변수 끌어오기
extern std::ofstream out_fp;

/*
	함수 이름 : startInterface
	기능	  : 자전거 대여 정보 리스트 파일 출력
	전달 인자 : rentalList < 자전거 대여 정보 리스트 / countBike < 총 대여 횟수
	반환값    : 없음
*/
void RentalListUI::startInterface(Bike** rentalList, int countBike)
{
	out_fp << "5.1. 자전거 대여 리스트";

	for (int i = 0; i < countBike; ++i)
	{
		out_fp << "\n> " << rentalList[i]->getId() << " " << rentalList[i]->getModelName();
	}
}