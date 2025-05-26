

#include "RentBikeUI.h"
#include "RentBike.h"
#include "Bike.h"



/*
	함수 이름 : RentBike
	기능	  : 생성자
	전달 인자 : bikeCollection < 현재 등록된 모든 자전거 집합 / userCollection < 현재 회원가입된 모든 유저 집합 / session < 현재 세션 정보
	반환값    : 없음
*/
RentBike::RentBike(BikeCollection* bikeCollection, UserCollection* userCollection, Session* session)
{
	this->bikeCollection = bikeCollection;
	this->userCollection = userCollection;
	this->session = session;

	// 바운더리 클래스 생성 및 함수 호출
	RentBikeUI* rentBikeUI = new RentBikeUI(NULL);
	rentBikeUI->startInterface();

	delete rentBikeUI;
}


/*
	함수 이름 : rentBike
	기능	  : 자전거 대여
	전달 인자 : id < 대여할 자전거의 id
	반환값    : 대여된 자전거 객체 포인터, 만약 해당 자전거가 이미 대여 되었을 경우 NULL 값 반환
*/
Bike* RentBike::rentBike(std::string id)
{
	// 자전거 찾기
	Bike* bike = this->bikeCollection->findBike(id);
	// 현재 로그인한 사용자의 id 찾기
	std::string userId = this->session->getCurrentUserId();
	
	// 자전거가 아직 대여되지 않았음
	if (!bike->isRented())
	{
		// 자전거 대여
		bike->rent();
		// 현재 로그인한 유저 찾기
		User* user = this->userCollection->findUser(userId);
		// 해당 유저에 자전거 대여 수행
		user->addBike(bike);

		return bike;
	}
	// 자전거가 이미 대여됨
	else
	{
		return NULL;
	}
}