#pragma once

#include "header.h"
#include "BikeCollection.h"
#include "Session.h"
#include "UserCollection.h"

// Ŭ���� ���漱��
class UserCollection;
class Session;

// ������ �뿩 ��Ʈ�� Ŭ����
class RentBike
{
private:
	BikeCollection* bikeCollection; // ������ ����
	UserCollection* userCollection; // ���� ����
	Session* session; // ����
public:
	RentBike(BikeCollection* bikeCollection, UserCollection* userCollection, Session* session); // ������
	Bike* rentBike(std::string id); // ������ �뿩

};