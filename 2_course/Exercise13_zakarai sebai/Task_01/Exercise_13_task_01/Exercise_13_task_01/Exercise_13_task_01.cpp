// Exercise_13_task_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int silly(string* s);
int silly(string* s, int x);

int main()
{
    int calls_num=0;
    string str = "Hello i am a silly function";

    calls_num += silly(&str);
    calls_num += silly(&str);
    calls_num += silly(&str, calls_num);
    calls_num += silly(&str, calls_num);

}

int silly(string *s) {
    cout << "\n=====> "<< *s << endl;
    return 1;
}
int silly(string* s, int x) {
    cout << "\nAt this point u used this silly function " << x << " times so iI will print thes tring same times \n";
    for (int i = 0; i < x; i++) {
        cout << "\n=====> " << *s << endl;
    }
    return 1;
}