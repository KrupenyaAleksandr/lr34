#include "Header.h"

int main() {
	
	int x;
	srand(time(NULL));
	setlocale(LC_ALL, "RU");
	element* Head = NULL;

	makeRing(Head);
	printRing(Head);
	cout << "������� ���������� ��������: ";
	cin >> x;
	action(Head, x);
	cout << "���������� ����� ��������: " << endl;
	printRing(Head);

	return 0;
}