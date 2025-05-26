
#include "AddBike.h"
#include "AddBikeUI.h"


/*
	함수 이름 : AddBike
	기능	  : 생성자
	전달 인자 : bikeCollection < 등록된 자전거 집합
	반환값    : 없음
*/
AddBike::AddBike(BikeCollection* bikeCollection)
{
	this->bikeCollection = bikeCollection;

	// 자전거 등록 바운더리 객체 생성 후 함수 호출
	AddBikeUI* addBikeUI = new AddBikeUI(NULL);
	addBikeUI->startInterface();

	delete addBikeUI;
}


/*
	함수 이름 : addNewBike
	기능	  : 자전거 등록
	전달 인자 : id < 새로 등록하려는 자전거의 id / modelName < 새로 등록하려는 자전거의 모델명
	반환값    : 등록 성공 여부
*/
bool AddBike::addNewBike(std::string id, std::string modelName)
{
	return this->bikeCollection->addNewBike(id, modelName);
}