// Exercise_13_task_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

struct stringy {
    char* str;
    int ct;
};

void set(stringy * str, char *test);
void show(stringy* beany, int x=1);
void show(const char* str, int x=1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(&beany, testing);
    show(&beany);
    show(&beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done");
    return 0;
}

void set(stringy* beany, char test[])
{
    beany->str = new char[strlen(test)];
    strcpy(beany->str, test);
    beany->ct = strlen(test);
}
void show(stringy* beany, int x)
{
    for (int i = 0; i < x; i++) {
        cout << beany->str << endl;
    }
}
void show(const char*  str, int x)
{
    for (int i = 0; i < x; i++) {
        cout << str << endl;
    }
}