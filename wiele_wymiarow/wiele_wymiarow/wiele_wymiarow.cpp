#include "stdafx.h"
#include <iostream>
using namespace std;

void first_task(int output[4]) {
	output[0] = 2 + 7 * 16 - 8;
	output[1] = 22 * 2 / 11;
	output[2] = 8383 - 222 + 292 * 8;
	output[3] = 5 * 2 * 4;
}

void second_task(int output[4]) {
	output[0] = output[0] * 2 - 13;
	output[1] = output[1] - 4 + 1;
	output[2] = output[2] + 88 - 250;
	output[3] += output[0] + output[1] + output[2];
}

void print_results(int tab[], int size, int task_nr) {
	cout << "Wyniki zadania " << task_nr << ": \n";
	for (int i = 0; i < size; i++) {
		cout << "[" << i << "] " << tab[i] << "\n";
	}
}

void third_task(int tab[2][4]) {
	cout << "Podaj 2 liczby\n";
	cin >> tab[0][0];
	cin >> tab[0][1];

	tab[1][0] = tab[0][0] + tab[0][1];
	tab[1][1] = tab[0][0] - tab[0][1];
	tab[1][2] = tab[0][0] * tab[0][1];
	tab[1][3] = tab[0][0] / tab[0][1];

	cout << "U¿ytkownik poda³ nastêpuj¹ce liczby\nLiczba 1 = " << tab[0][0] << "\nLiczba 2 = " << tab[0][1] << "\n";
	cout << "\nWynik dodawania\n" << tab[0][0] << "+" << tab[0][1] << "=" << tab[1][0];
	cout << "\nWynik odejmowania\n" << tab[0][0] << "-" << tab[0][1] << "=" << tab[1][1];
	cout << "\nWynik mnożenia\n" << tab[0][0] << "*" << tab[0][1] << "=" << tab[1][2];
	cout << "\nWynik dzielenia\n" << tab[0][0] << "/" << tab[0][1] << "=" << tab[1][3] << "\n";
}

int main()
{
	int tab2d[2][4];
	int zad2[4];
	int zad1[4];

	//zadanie nr 1
	first_task(zad1);
	print_results(zad1, 4, 1);

	for (int i = 0; i < 4; i++) {
		zad2[i] = zad1[i];
	}

	//zadanie nr 2 
	second_task(zad2);
	print_results(zad2, 4, 2);

	//zadanie nr 3
	third_task(tab2d);
    return 0;
}