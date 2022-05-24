#include "Header.h"

int main() {
	
	int x;
	srand(time(NULL));
	setlocale(LC_ALL, "RU");
	element* Head = NULL;

	makeRing(Head);
	printRing(Head);
	cout << "Введите количество итераций: ";
	cin >> x;
	action(Head, x);
	cout << "Полученный набор карточек: " << endl;
	printRing(Head);

	return 0;
}