#include<iostream>
using namespace std;

int main ()
    {
        int age = 50;
        int *pAge = &age; // pointer of age/ adress of age
        cout << pAge << endl; // adress of the age / can be write like &age
        cout << *pAge << endl; // value of age / can be write like *&age
        return 0;
    }
