#pragma once
#include "Item.hpp"

class Armor : public Item{
protected:
	//double armorPow; //��� ����
	//���� �� ������ ����� - ��� ����� ����� �� ��������
	Armor();
	Armor(double armorPow, const Point2d &pos);
public:
	virtual ~Armor();
	const double getTotalPow() const;
	string toString();
};

