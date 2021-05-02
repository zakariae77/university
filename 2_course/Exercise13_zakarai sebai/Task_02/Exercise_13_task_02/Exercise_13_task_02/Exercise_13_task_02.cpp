// Exercise_13_task_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct candyBar {
    string name;
    double weight;
    int calories;
};

void setMembers(candyBar* candy, const char* _name = "Millenium Munch", double _weight = 2.85, int _calories = 350);
void display(candyBar* candy);

int main()
{
    candyBar candy;
    cout << "here we giv only first argument (we use 3 default values)\n" << endl;
    setMembers(&candy);
    display(&candy);

    cout << "\n         ***********  here we set all the values   ********\n" << endl;
    setMembers(&candy, "Good Candy", 50, 1000);
    display(&candy);
}

void setMembers(candyBar *candy,const char *_name , double _weight, int _calories) {
    candy->name = _name;
    candy->weight = _weight;
    candy->calories = _calories;
}
void display(candyBar* candy) {
    cout << "candy name:     " << candy->name << endl;
    cout << "candy Weight:   " << candy->weight << endl;
    cout << "candy calories: " << candy->calories << endl;
}