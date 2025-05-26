
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

// ���� ����ü
std::ofstream out_fp;
std::ifstream in_fp;

// �޴� ��Ʈ
void doTask();

// �� �޴��� �ش��ϴ� �Լ�
void registerUser(UserCollection* userCollection);
void login(UserCollection* userCollection, Session* session);
void logout(Session* session);
void registerBike(BikeCollection* bikeCollection);
void rentBike(BikeCollection* bikeCollection, UserCollection* userCollection, Session* session);
void printRentalList(UserCollection* userCollection, Session* session);
void exit();

/*
	�Լ� �̸� : main
	���	  : ���α׷� ����
	���� ���� : ����
	��ȯ��    : ���α׷� ���� ���� �ڵ�
*/
int main()
{
	// ���� ����ü ����
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	// �޴� ����
	doTask();

	// ���� ����ü �ݱ�
	out_fp.close();
	in_fp.close();

	return 0;
}

/*
	�Լ� �̸� : doTask
	���	  : �޴� ����
	���� ���� : ����
	��ȯ��    : ����
*/
void doTask()
{
	// ����ڰ� ������ �޴� �����ϴ� ����
	int menu_level_1 = 0, menu_level_2 = 0;
	// ���� ���� Ȯ���ϴ� ����
	int is_program_exit = 0;

	// entity ����
	Session* session = new Session();
	UserCollection* userCollection = new UserCollection();
	BikeCollection* bikeCollection = new BikeCollection();

	// ���� �Էµ� ������, �޴� ���� �ݺ�
	while (!is_program_exit)
	{
		// ����ڰ� ������ �޴� �б�
		in_fp >> menu_level_1 >> menu_level_2;

		// �޴��� ���� �б�
		switch (menu_level_1)
		{
			case 1:
			{
				switch (menu_level_2)
				{
					case 1:
					{
						// ȸ������ 
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
						// �α���
						login(userCollection, session);
						break;
					}
					case 2:
					{
						// �α׾ƿ�
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
						// ������ ���
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
						// ������ �뿩
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
						// ������ �뿩 ���� ��ȸ
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
						// ���α׷� ����
						exit();
						is_program_exit = 1;
						break;
					}
				}
				break;
			}
		}
		// ��� ����� ���� �ڵ�
		out_fp << "\n\n";
	}

	delete session;
	delete userCollection;
	delete bikeCollection;
}


/*
	�Լ� �̸� : registerUser
	���	  : ȸ������
	���� ���� : userCollection < ������ ��� �ִ� ��ü�� �ּҰ�  
	��ȯ��    : ����
*/
void registerUser(UserCollection* userCollection)
{
	// ȸ������ ��Ʈ�� Ŭ���� ����
	Register* registerControl = new Register(userCollection);
	
	// ������� �Է� �б�
	std::string id, password, phoneName;
	in_fp >> id >> password >> phoneName;

	// ������� ȸ������ �Լ� ȣ��
	RegisterUI* registerUI = new RegisterUI(registerControl);
	registerUI->registerUser(id, password, phoneName);

	delete registerControl;
	delete registerUI;
}

/*
	�Լ� �̸� : login
	���	  : �α���
	���� ���� : userCollection < ������ ��� �ִ� ��ü�� �ּҰ� / session < �� ���� �α��� ������ ��� �ִ� ��ü�� �ּҰ�
	��ȯ��    : ����
*/
void login(UserCollection* userCollection, Session* session)
{
	// �α��� ��Ʈ�� ��ü ����
	Login* login = new Login(userCollection, session);

	// ����� �Է� �ޱ�
	std::string id, password;
	in_fp >> id >> password;

	// ������� �α��� �Լ� ȣ��
	LoginUI* loginUI = new LoginUI(login);
	loginUI->login(id, password);

	delete login;
	delete loginUI;
}

/*
	�Լ� �̸� : logout
	���	  : �α׾ƿ�
	���� ���� : session < �� ���� �α��� ������ ��� �ִ� ��ü�� �ּҰ�
	��ȯ��    : ����
*/
void logout(Session* session)
{
	// �α׾ƿ� ��Ʈ�� ��ü ����
	Logout* logout = new Logout(session);
	
	// ������� �α׾ƿ� �Լ� ȣ��
	LogoutUI* logoutUI = new LogoutUI(logout);
	logoutUI->logout();

	delete logout;
	delete logoutUI;
}

/*
	�Լ� �̸� : registerBike
	���	  : ������ ���
	���� ���� : bikeCollection < �����Ÿ� ��� �ִ� ��ü�� �ּҰ�
	��ȯ��    : ����
*/
void registerBike(BikeCollection* bikeCollection)
{
	// ������ ��� ��Ʈ�� ��ü ����
	AddBike* addBike = new AddBike(bikeCollection);

	// ����� �Է� �ޱ�
	std::string id, modelName;
	in_fp >> id >> modelName;

	// ����ڰ� ������ ��� �Լ� ȣ��
	AddBikeUI* addBikeUI = new AddBikeUI(addBike);
	addBikeUI->registerBike(id, modelName);

	delete addBike;
	delete addBikeUI;
}

/*
	�Լ� �̸� : rentBike
	���	  : ������ �뿩
	���� ���� : bikeCollection < �����Ÿ� ��� �ִ� ��ü�� �ּҰ� / userCollection < ������ ��� �ִ� ��ü�� �ּҰ� / session < �� ���� �α��� ������ ��� �ִ� ��ü�� �ּҰ�
	��ȯ��    : ����
*/
void rentBike(BikeCollection* bikeCollection, UserCollection* userCollection, Session* session)
{
	// ������ �뿩 ��Ʈ�� ��ü ����
	RentBike* rentBike = new RentBike(bikeCollection, userCollection, session);

	// ����� �Է� �ޱ�
	std::string id;
	in_fp >> id;

	// ������� ������ �뿩 �Լ� ȣ��
	RentBikeUI* rentBikeUI = new RentBikeUI(rentBike);
	rentBikeUI->rentBike(id);

	delete rentBike;
	delete rentBikeUI;
}

/*
	�Լ� �̸� : printRentalList
	���	  : ������ �뿩 ���� ���
	���� ���� : userCollection < ������ ��� �ִ� ��ü�� �ּҰ� / session < �� ���� �α��� ������ ��� �ִ� ��ü�� �ּҰ�
	��ȯ��    : ����
*/
void printRentalList(UserCollection* userCollection, Session* session)
{
	// ������ �뿩 ���� ��ȸ ��Ʈ�� ��ü ����
	RentalList* rentalList = new RentalList(userCollection, session);

	delete rentalList;
}

/*
	�Լ� �̸� : exit
	���	  : ���α׷� ���� �޽��� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void exit()
{
	out_fp << "6.1. ����";
}