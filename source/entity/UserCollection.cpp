
#include "UserCollection.h"


/*
	함수 이름 : UserCollection
	기능	  : 생성자
	전달 인자 : 없음
	반환값    : 없음
*/
UserCollection::UserCollection()
{
	// 관리자 계정은 자동 등록
	this->countUser = 1;
	this->registeredUser[0] = new User("admin", "admin", "adminPhoneNumber");
}

/*
	함수 이름 : addNewUser
	기능	  : 새로운 유저 등록
	전달 인자 : id < 등록될 유저의 아이디 / password < 등록될 유저의 패스워드 / phoneNumber < 등록될 유저의 전화번호
	반환값    : 없음
*/
void UserCollection::addNewUser(std::string id, std::string password, std::string phoneNumber)
{
	// 유저 생성
	this->registeredUser[this->countUser++] = new User(id, password, phoneNumber);
}

/*
	함수 이름 : isValidUser
	기능	  : 전달받은 id와 password가 유효한 것인지 확인
	전달 인자 : id < 확인할 id / password < 확인할 password
	반환값    : 유효하면 true, 아니면 false
*/
bool UserCollection::isValidUser(std::string id, std::string password)
{
	// 모든 등록된 유저에 대하여
	for (int i = 0; i < this->countUser; ++i)
	{
		// 파라미터를 비교하여 유효한지 확인
		User* user = this->registeredUser[i];
		if (user->getId() == id && user->getPassword() == password)
		{
			return true;
		}
	}
	return false;
}

/*
	함수 이름 : findUser
	기능	  : 넘겨받은 id에 해당하는 유저를 반환
	전달 인자 : id < 찾을 유저의 id
	반환값    : id에 맞는 유저가 존재하면 해당 유저 객체의 주소값 / 만약 존재하지 않는다면, NULL 값
*/
User* UserCollection::findUser(std::string id)
{
	// 모든 등록된 유저에 대하여
	for (int i = 0; i < this->countUser; ++i)
	{
		// id가 일치한다면 유저 객체 포인터를 반환
		if (this->registeredUser[i]->getId() == id)
		{
			return this->registeredUser[i];
		}
	}
	// 존재하지 않음
	return NULL;
}