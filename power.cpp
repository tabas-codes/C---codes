#include<iostream>
using namespace std;

int power (int base, int exponent)
    {
       int result = 1;
        for (int i= 1; i<= exponent; i++)
        {
            result *= base;
        } 
        return result;
    }

int main() {
    int a, b;
    cout << power ( a, b) << endl;
    cout << "Enter the base number:" << endl;
    cin >> a;
    cout << "Enter the exponent number:" << endl;
    cin >> b;
    cout << power (a,b) << endl;
    return 0;
}