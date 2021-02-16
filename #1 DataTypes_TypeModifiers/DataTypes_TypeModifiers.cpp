#include <iostream>
using namespace std;

int main()
{
    int a;  //declaration
    a = 12; //initialization
    cout << "Size of int is " << sizeof(a) << endl;

    float b;
    cout << "Size of float is " << sizeof(b) << endl;

    char c;
    cout << "Size of char is " << sizeof(c) << endl;

    bool d;
    cout << "Size of bool is " << sizeof(d) << endl;

    short int si;
    long int li;
    cout << "Size of shortint is " << sizeof(si) << endl;
    cout << "Size of longint is " << sizeof(li) << endl;

    return 0;
}