#include "Header.h"

void makeRing(element*& Head) {
	string str;
	int x;
	cout << "Ввод элементов через enter, \"stop\" для остановки" << endl;
	getline(cin, str);
	if (str != "stop") {
		x = stoi(str);
		element* cur, * previous = NULL;
		Head = new(element);
		cur = Head;
		previous = cur;
		cur->num = x;
		while (true) {
			getline(cin, str);
			if (str == "stop") break;
			x = stoi(str);
			previous = cur;
			cur = new(element);
			cur->num = x;
			previous->next = cur;
			cur->next = NULL;
		}
		cur->next = Head;
	}
}

void printRing(element*& Head) {
	if (Head != NULL) {
		element* cur = Head;
		do {
			cout << cur->num << ' ';
			cur = cur->next;
		} while (cur != Head);
		cout << endl;
	}
}

void action(element*& Head, int n) {
	if (Head != NULL) {
		bool flag;
		element* cur = Head;
		for (int i = 0; i < n; i++) {
			do {
				flag = false;
				if (cur->next->num % 5 == 0) {
					flag = true;
					element* tmp = new(element);
					tmp->num = rand() % 100;
					tmp->next = cur->next;
					cur->next = tmp;
					cur = tmp;
					tmp = cur->next->next;
					if (Head == cur->next) {
						Head = tmp;
					}
					free(cur->next);
					cur->next = tmp;
				}
				if (!flag) cur = cur->next;
			} while (cur != Head);
		}
	}
}