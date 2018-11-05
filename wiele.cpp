// #include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char chars[3][10][20] = {
		{"yard", "blink", "thirsty", "smash", "mark", "miscreant", "short", "laughable", "stranger", "save"},
		{"brass", "eight", "substance", "act", "snobbish", "even", "marked", "brown", "van", "worm"},
		{"profit", "illegal", "damage", "hose", "listen", "camp", "matter", "dysfunctional", "obedient", "powerful"}
	};
	char find;
	int count = 0;
	int results[10];

	cout << "Wyrazy do przeszukania: \n\n";
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 10; j++){
			cout << chars[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\nPodaj litere do odnalazenia: ";
	cin >> find;

	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 10; j++){
			for (int q = 0; q < 20; q++){
				if (chars[i][j][q] == find){
					count++;
					
				}
			}
		}
	}

	cout << "Znaleziono" << count << "razy";
	return 0;
}