#pragma once
#ifndef header
#define header

#include <iostream>
#include <malloc.h>
#include <conio.h>
#include <locale.h>
#include <string>
#include <time.h>

struct element {
	int num;
	element* next;
};

void makeRing(element*& Head);
void printRing(element*& Head);
void action(element*& Head, int n);

using namespace std;

#endif header