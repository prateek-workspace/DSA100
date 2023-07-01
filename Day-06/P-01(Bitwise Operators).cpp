// WAP to perform all bitwise operations.

#include<iostream>
using namespace std;

int main()
{

    int a;
    int b;

    cout << "Enter values of a and b -: ";

    cin >> a;
    cin >> b;

    cout <<  "a & b is -: " << (a & b ) << endl;
    cout <<  "a | b is -: " << (a | b ) << endl;
    cout <<  " ~a is -: " << (~a ) << endl;
    cout <<  " ~b is -: " << ( ~b ) << endl;
    cout <<  "a ^ b is -: " << (a ^ b ) << endl;

}