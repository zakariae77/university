// Exericise_13_task_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int _size = 40;
void toUP(char* s);
void print(char* s, int n);
int main()
{
	char str[_size];

	while (1)
	{
		cout << "Enter a string: (q to quit) ";
		cin.getline(str, _size);
		if (str[0] == 'q' && strlen(str) == 1)break;
		toUP(str);
	}
	cout << "\nBey" << endl;
}

void toUP( char *s) {
	cout << "\n";
	for(int i = 0; i < strlen(s); i++) {
		char up= toupper(s[i]);
		cout << up;
	}
	cout << "\n\n";
}
