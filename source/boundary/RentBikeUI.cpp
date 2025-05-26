
#include "RentBikeUI.h"

// 파일 입출력을 위해 전역변수 끌어오기
extern std::ofstream out_fp;

/*
	함수 이름 : RentBikeUI
	기능	  : 생성자
	전달 인자 : rentBike < 자전거 대여 컨트롤 객체 주소값
	반환값    : 없음
*/
RentBikeUI::RentBikeUI(RentBike* rentBike)
{
	this->rentBikeVar = rentBike;
}


/*
	함수 이름 : startInterface
	기능	  : 자전거 대여 관련 파일 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void RentBikeUI::startInterface()
{
	out_fp << "4.1. 자전거 대여\n >";
}


/*
	함수 이름 : rentBike
	기능	  : 자전거 대여
	전달 인자 : id < 대여할 자전거의 id
	반환값    : 없음
*/
void RentBikeUI::rentBike(std::string id)
{
	// 자전거 대여 컨트롤 클래스 함수 호출
	Bike* bike = this->rentBikeVar->rentBike(id);

	if (bike == NULL)
	{
		out_fp << "WARN :: rentBike fail";
	}
	else
	{
		out_fp << bike->getId() << " " << bike->getModelName();
	}
}
