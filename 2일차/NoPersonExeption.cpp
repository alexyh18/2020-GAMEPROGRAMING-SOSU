#include "NoPersonExeption.h"

int main()
{
	int pizzaSlices = 12;
	int persons = 0;
	int slicesPerPerson = 0;

	try {
		cout << "��� ���� �Է��Ͻÿ� : ";
		cin >> persons;
		if (persons <= 0) {
			throw NoPersonExeption(persons);
		}
		slicesPerPerson = pizzaSlices / persons;
		cout << "�� ����� ���ڴ�" << slicesPerPerson << "�Դϴ�" << endl;

	}
	catch (NoPersonExeption e) {
		cout << "���� : �����" << e.getPersons() << "�� �Դϴ�." << endl;
	}

	return 0;
}