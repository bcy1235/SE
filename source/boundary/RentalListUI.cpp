
#include "RentalListUI.h"
#include "header.h"

// ���� ����� ���� �������� �������
extern std::ofstream out_fp;

/*
	�Լ� �̸� : startInterface
	���	  : ������ �뿩 ���� ����Ʈ ���� ���
	���� ���� : rentalList < ������ �뿩 ���� ����Ʈ / countBike < �� �뿩 Ƚ��
	��ȯ��    : ����
*/
void RentalListUI::startInterface(Bike** rentalList, int countBike)
{
	out_fp << "5.1. ������ �뿩 ����Ʈ";

	for (int i = 0; i < countBike; ++i)
	{
		out_fp << "\n> " << rentalList[i]->getId() << " " << rentalList[i]->getModelName();
	}
}