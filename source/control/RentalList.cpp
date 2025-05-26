
#include "RentalListUI.h"
#include <algorithm>


/*
	함수 이름 : RentalList
	기능	  : 생성자
	전달 인자 : userCollection < 회원가입된 모든 유저 집합 / session < 세션 정보
	반환값    : 없음
*/
RentalList::RentalList(UserCollection* userCollection, Session* session)
{
	this->userCollection = userCollection;
	this->session = session;

	// 현재 로그인한 사용자의 id 가져오기
	std::string userId = session->getCurrentUserId();
	// 해당 id에 맞는 유저 객체 포인터 가져오기
	User* user = userCollection->findUser(userId);

	// 해당 유저의 자전거 대여 리스트 및 횟수 뽑아오기
	Bike** rentalList = user->getRentalList();
	int numRental = user->getNumRental();

	// 자전거 id를 기준으로 오름차순 정렬
	std::sort(rentalList, rentalList + numRental, [](Bike* a, Bike* b) {
		return a->getId() < b->getId();
		});

	// 자전거 대여 정보 조회 바운더리 객체 생성 및 함수 호출
	RentalListUI* rentalListUI = new RentalListUI();
	rentalListUI->startInterface(rentalList, numRental);

	delete rentalListUI;
}