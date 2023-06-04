// WAP to convert Celcius toFahrenhiet.

#include<iostream>
using namespace std;

int main ()
{

int in;
float c, f;

cout << "Enter 1 for C to F and 2 for F to C :--- " << endl;
cin >> in;

if (in == 1)
{
    cout << "Enter temperature in C :-- " << endl;
    cin >> c;

    f = ((c)*9/5) + 32 ;
    cout << "Temperature in F is :--- " << f << endl;
}

else
{
    cout << "Enter temperature in F :--- " << endl;
    cin >> f;

    c =  ((f-32) * 5 / 9 ) ;
    cout << "Temperature in C is :--- " << c <<endl;
}

}