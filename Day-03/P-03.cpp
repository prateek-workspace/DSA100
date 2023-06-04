// WAP to check if number is positive, negative or zero.

#include<iostream>
using namespace std;

int main ()
{

int a;

cout << "Enter Number :---" << endl;
cin >> a;

if (a > 0)
{
    cout << "Number is Positive" << endl;

}

else if (a < 0)
{
    cout << "Number is Negative" << endl;
}

else 
{
    cout << "Number is Zero" << endl;
}

}