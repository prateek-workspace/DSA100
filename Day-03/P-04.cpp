//WAP to indicate whether user enters an Upper Case, a Lower Case or a Number. 

#include<iostream>
using namespace std;

int main()
{

char ch;

cout << "Enter something :---" << endl;
cin >> ch ;

// here we are converting our character input into int i.e. ASCII code.

int ascii = ch;

if (ascii >= 65 && ascii <= 90)
{
    cout << "This is Upper Case" << endl;

}

else if (ascii >= 97 && ascii <= 122)
{
    cout << "This is Lower Case" << endl;

}

else if (ascii >= 48 && ascii <= 57)
{
    cout << "This is a Number" << endl;
}

else
{
    cout << "Invalid Input, Try Again !! " << endl;
}

}