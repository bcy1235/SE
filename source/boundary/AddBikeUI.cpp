
#include "AddBikeUI.h"

// 파일 출력을 위한 전역변수 extern
extern std::ofstream out_fp;

/*
	함수 이름 : AddBikeUI
	기능	  : 생성자
	전달 인자 : addBike < 자전거 등록 컨트롤 객체 주소값
	반환값    : 없음
*/
AddBikeUI::AddBikeUI(AddBike* addBike)
{
	this->addBike = addBike;
}

/*
	함수 이름 : startInterface
	기능	  : 자전거 등록 메뉴 파일 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void AddBikeUI::startInterface()
{
	out_fp << "3.1. 자전거 등록\n> ";
}


/*
	함수 이름 : registerBike
	기능	  : 자전거 등록 연계
	전달 인자 : id < 등록할 자전거의 id / modelName < 등록할 자전거의 모델명
	반환값    : 없음
*/
void AddBikeUI::registerBike(std::string id, std::string modelName)
{
	// 자전거 등록 성공 시,
	if (this->addBike->addNewBike(id, modelName))
	{
		out_fp << id << " " << modelName;
	}
	// 실패 시, 경고 출력
	else
	{
		out_fp << "WARN :: fail to register bike";
	}
}