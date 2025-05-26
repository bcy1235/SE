
#include "AddBikeUI.h"

// ���� ����� ���� �������� extern
extern std::ofstream out_fp;

/*
	�Լ� �̸� : AddBikeUI
	���	  : ������
	���� ���� : addBike < ������ ��� ��Ʈ�� ��ü �ּҰ�
	��ȯ��    : ����
*/
AddBikeUI::AddBikeUI(AddBike* addBike)
{
	this->addBike = addBike;
}

/*
	�Լ� �̸� : startInterface
	���	  : ������ ��� �޴� ���� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void AddBikeUI::startInterface()
{
	out_fp << "3.1. ������ ���\n> ";
}


/*
	�Լ� �̸� : registerBike
	���	  : ������ ��� ����
	���� ���� : id < ����� �������� id / modelName < ����� �������� �𵨸�
	��ȯ��    : ����
*/
void AddBikeUI::registerBike(std::string id, std::string modelName)
{
	// ������ ��� ���� ��,
	if (this->addBike->addNewBike(id, modelName))
	{
		out_fp << id << " " << modelName;
	}
	// ���� ��, ��� ���
	else
	{
		out_fp << "WARN :: fail to register bike";
	}
}