#pragma once
//////////////////����� UserInterface//////////////////////
//������� ����� ��� ������� ����������:
//���� ����� ���������� �������������� ����� � ����������.
class UserInterface
{
private:
	OrderList* ptrOrderList;
	OrderInputScreen* ptrOrderInputScreen;
	ExpenseRecord* ptrExpenseRecord;
	ExpenseInputScreen* ptrExpenseInputScreen;
	AnnualReport* ptrAnnualReport;
	char ch;
public:

	UserInterface();