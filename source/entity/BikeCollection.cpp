
#include "BikeCollection.h"


/*
	함수 이름 : BikeCollection
	기능	  : 생성자
	전달 인자 : 없음
	반환값    : 없음
*/
BikeCollection::BikeCollection()
{
	this->countBike = 0;
}


/*
	함수 이름 : addNewBike
	기능	  : 신규 자전거 등록
	전달 인자 : id < 새로 등록할 자전거의 id / modelName < 새로 등록할 자전거의 모델명
	반환값    : 등록 성공 실패 여부
*/
bool BikeCollection::addNewBike(std::string id, std::string modelName)
{
	this->registeredBike[this->countBike++] = new Bike(id, modelName);
	return true;
}


/*
	함수 이름 : findBike
	기능	  : 등록된 자전거 찾기
	전달 인자 : id < 찾을 자전거의 id
	반환값    : 해당하는 자전거의 객체 포인터, 만약 존재하지 않을 경우 NULL 반환
*/
Bike* BikeCollection::findBike(std::string id)
{
	// 등록된 모든 자전거에 대하여
	for (int i = 0; i < this->countBike; ++i)
	{
		// id가 일치한다면 해당 객체 주소값 반환
		if (this->registeredBike[i]->getId() == id)
		{
			return this->registeredBike[i];
		}
	}
	// 일치하는 자전거가 없음
	return NULL;
}