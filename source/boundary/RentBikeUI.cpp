
#include "RentBikeUI.h"

// ���� ������� ���� �������� �������
extern std::ofstream out_fp;

/*
	�Լ� �̸� : RentBikeUI
	���	  : ������
	���� ���� : rentBike < ������ �뿩 ��Ʈ�� ��ü �ּҰ�
	��ȯ��    : ����
*/
RentBikeUI::RentBikeUI(RentBike* rentBike)
{
	this->rentBikeVar = rentBike;
}


/*
	�Լ� �̸� : startInterface
	���	  : ������ �뿩 ���� ���� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void RentBikeUI::startInterface()
{
	out_fp << "4.1. ������ �뿩\n >";
}


/*
	�Լ� �̸� : rentBike
	���	  : ������ �뿩
	���� ���� : id < �뿩�� �������� id
	��ȯ��    : ����
*/
void RentBikeUI::rentBike(std::string id)
{
	// ������ �뿩 ��Ʈ�� Ŭ���� �Լ� ȣ��
	Bike* bike = this->rentBikeVar->rentBike(id);

	if (bike == NULL)
	{
		out_fp << "WARN :: rentBike fail";
	}
	else
	{
		out_fp << bike->getId() << " " << bike->getModelName();
	}
}
