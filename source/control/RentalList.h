#pragma once


#include "UserCollection.h"
#include "Session.h"

// �뿩 ���� ��ȸ ��Ʈ�� Ŭ����
class RentalList
{
private:
	UserCollection* userCollection; // ���� ����
	Session* session; // ����

public:
	RentalList(UserCollection* userCollection, Session* session); // ������

};