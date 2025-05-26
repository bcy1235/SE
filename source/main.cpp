
#include "header.h"

#include "BikeCollection.h"
#include "UserCollection.h"
#include "Session.h"

#include "RegisterUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "AddBikeUI.h"
#include "RentBikeUI.h"
#include "RentalListUI.h"

// 파일 구조체
std::ofstream out_fp;
std::ifstream in_fp;

// 메뉴 파트
void doTask();

// 각 메뉴에 해당하는 함수
void registerUser(UserCollection* userCollection);
void login(UserCollection* userCollection, Session* session);
void logout(Session* session);
void registerBike(BikeCollection* bikeCollection);
void rentBike(BikeCollection* bikeCollection, UserCollection* userCollection, Session* session);
void printRentalList(UserCollection* userCollection, Session* session);
void exit();

/*
	함수 이름 : main
	기능	  : 프로그램 시작
	전달 인자 : 없음
	반환값    : 프로그램 종료 상태 코드
*/
int main()
{
	// 파일 구조체 열기
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	// 메뉴 시작
	doTask();

	// 파일 구조체 닫기
	out_fp.close();
	in_fp.close();

	return 0;
}

/*
	함수 이름 : doTask
	기능	  : 메뉴 시작
	전달 인자 : 없음
	반환값    : 없음
*/
void doTask()
{
	// 사용자가 선택한 메뉴 저장하는 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	// 종료 여부 확인하는 변수
	int is_program_exit = 0;

	// entity 생성
	Session* session = new Session();
	UserCollection* userCollection = new UserCollection();
	BikeCollection* bikeCollection = new BikeCollection();

	// 종료 입력될 때까지, 메뉴 무한 반복
	while (!is_program_exit)
	{
		// 사용자가 선택한 메뉴 읽기
		in_fp >> menu_level_1 >> menu_level_2;

		// 메뉴에 따른 분기
		switch (menu_level_1)
		{
			case 1:
			{
				switch (menu_level_2)
				{
					case 1:
					{
						// 회원가입 
						registerUser(userCollection);
						break;
					}
				}
				break;
			}
			case 2:
			{
				switch (menu_level_2)
				{
					case 1:
					{
						// 로그인
						login(userCollection, session);
						break;
					}
					case 2:
					{
						// 로그아웃
						logout(session);
						break;
					}
				}
				break;
			}
			case 3:
			{
				switch (menu_level_2)
				{
					case 1:
					{
						// 자전거 등록
						registerBike(bikeCollection);
						break;
					}
				}
				break;
			}
			case 4:
			{
				switch (menu_level_2)
				{
					case 1:
					{
						// 자전거 대여
						rentBike(bikeCollection, userCollection, session);
						break;
					}
				}
				break;
			}
			case 5:
			{
				switch (menu_level_2)
				{
					case 1:
					{
						// 자전거 대여 정보 조회
						printRentalList(userCollection, session);
						break;
					}
				}
				break;
			}
			case 6:
			{
				switch (menu_level_2)
				{
					case 1:
					{
						// 프로그램 종료
						exit();
						is_program_exit = 1;
						break;
					}
				}
				break;
			}
		}
		// 출력 양식을 위한 코드
		out_fp << "\n\n";
	}

	delete session;
	delete userCollection;
	delete bikeCollection;
}


/*
	함수 이름 : registerUser
	기능	  : 회원가입
	전달 인자 : userCollection < 유저를 담고 있는 객체의 주소값  
	반환값    : 없음
*/
void registerUser(UserCollection* userCollection)
{
	// 회원가입 컨트롤 클래스 생성
	Register* registerControl = new Register(userCollection);
	
	// 사용자의 입력 읽기
	std::string id, password, phoneName;
	in_fp >> id >> password >> phoneName;

	// 사용자의 회원가입 함수 호출
	RegisterUI* registerUI = new RegisterUI(registerControl);
	registerUI->registerUser(id, password, phoneName);

	delete registerControl;
	delete registerUI;
}

/*
	함수 이름 : login
	기능	  : 로그인
	전달 인자 : userCollection < 유저를 담고 있는 객체의 주소값 / session < 현 시점 로그인 정보를 담고 있는 객체의 주소값
	반환값    : 없음
*/
void login(UserCollection* userCollection, Session* session)
{
	// 로그인 컨트롤 객체 생성
	Login* login = new Login(userCollection, session);

	// 사용자 입력 받기
	std::string id, password;
	in_fp >> id >> password;

	// 사용자의 로그인 함수 호출
	LoginUI* loginUI = new LoginUI(login);
	loginUI->login(id, password);

	delete login;
	delete loginUI;
}

/*
	함수 이름 : logout
	기능	  : 로그아웃
	전달 인자 : session < 현 시점 로그인 정보를 담고 있는 객체의 주소값
	반환값    : 없음
*/
void logout(Session* session)
{
	// 로그아웃 컨트롤 객체 생성
	Logout* logout = new Logout(session);
	
	// 사용자의 로그아웃 함수 호출
	LogoutUI* logoutUI = new LogoutUI(logout);
	logoutUI->logout();

	delete logout;
	delete logoutUI;
}

/*
	함수 이름 : registerBike
	기능	  : 자전거 등록
	전달 인자 : bikeCollection < 자전거를 담고 있는 객체의 주소값
	반환값    : 없음
*/
void registerBike(BikeCollection* bikeCollection)
{
	// 자전거 등록 컨트롤 객체 생성
	AddBike* addBike = new AddBike(bikeCollection);

	// 사용자 입력 받기
	std::string id, modelName;
	in_fp >> id >> modelName;

	// 사용자가 자전거 등록 함수 호출
	AddBikeUI* addBikeUI = new AddBikeUI(addBike);
	addBikeUI->registerBike(id, modelName);

	delete addBike;
	delete addBikeUI;
}

/*
	함수 이름 : rentBike
	기능	  : 자전거 대여
	전달 인자 : bikeCollection < 자전거를 담고 있는 객체의 주소값 / userCollection < 유저를 담고 있는 객체의 주소값 / session < 현 시점 로그인 정보를 담고 있는 객체의 주소값
	반환값    : 없음
*/
void rentBike(BikeCollection* bikeCollection, UserCollection* userCollection, Session* session)
{
	// 자전거 대여 컨트롤 객체 생성
	RentBike* rentBike = new RentBike(bikeCollection, userCollection, session);

	// 사용자 입력 받기
	std::string id;
	in_fp >> id;

	// 사용자의 자전거 대여 함수 호출
	RentBikeUI* rentBikeUI = new RentBikeUI(rentBike);
	rentBikeUI->rentBike(id);

	delete rentBike;
	delete rentBikeUI;
}

/*
	함수 이름 : printRentalList
	기능	  : 자전거 대여 정보 출력
	전달 인자 : userCollection < 유저를 담고 있는 객체의 주소값 / session < 현 시점 로그인 정보를 담고 있는 객체의 주소값
	반환값    : 없음
*/
void printRentalList(UserCollection* userCollection, Session* session)
{
	// 자전거 대여 정보 조회 컨트롤 객체 생성
	RentalList* rentalList = new RentalList(userCollection, session);

	delete rentalList;
}

/*
	함수 이름 : exit
	기능	  : 프로그램 종료 메시지 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void exit()
{
	out_fp << "6.1. 종료";
}