
#include "UserCollection.h"


/*
	�Լ� �̸� : UserCollection
	���	  : ������
	���� ���� : ����
	��ȯ��    : ����
*/
UserCollection::UserCollection()
{
	// ������ ������ �ڵ� ���
	this->countUser = 1;
	this->registeredUser[0] = new User("admin", "admin", "adminPhoneNumber");
}

/*
	�Լ� �̸� : addNewUser
	���	  : ���ο� ���� ���
	���� ���� : id < ��ϵ� ������ ���̵� / password < ��ϵ� ������ �н����� / phoneNumber < ��ϵ� ������ ��ȭ��ȣ
	��ȯ��    : ����
*/
void UserCollection::addNewUser(std::string id, std::string password, std::string phoneNumber)
{
	// ���� ����
	this->registeredUser[this->countUser++] = new User(id, password, phoneNumber);
}

/*
	�Լ� �̸� : isValidUser
	���	  : ���޹��� id�� password�� ��ȿ�� ������ Ȯ��
	���� ���� : id < Ȯ���� id / password < Ȯ���� password
	��ȯ��    : ��ȿ�ϸ� true, �ƴϸ� false
*/
bool UserCollection::isValidUser(std::string id, std::string password)
{
	// ��� ��ϵ� ������ ���Ͽ�
	for (int i = 0; i < this->countUser; ++i)
	{
		// �Ķ���͸� ���Ͽ� ��ȿ���� Ȯ��
		User* user = this->registeredUser[i];
		if (user->getId() == id && user->getPassword() == password)
		{
			return true;
		}
	}
	return false;
}

/*
	�Լ� �̸� : findUser
	���	  : �Ѱܹ��� id�� �ش��ϴ� ������ ��ȯ
	���� ���� : id < ã�� ������ id
	��ȯ��    : id�� �´� ������ �����ϸ� �ش� ���� ��ü�� �ּҰ� / ���� �������� �ʴ´ٸ�, NULL ��
*/
User* UserCollection::findUser(std::string id)
{
	// ��� ��ϵ� ������ ���Ͽ�
	for (int i = 0; i < this->countUser; ++i)
	{
		// id�� ��ġ�Ѵٸ� ���� ��ü �����͸� ��ȯ
		if (this->registeredUser[i]->getId() == id)
		{
			return this->registeredUser[i];
		}
	}
	// �������� ����
	return NULL;
}