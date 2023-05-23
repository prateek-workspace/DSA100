// WAP to print average of three numbers.

#include<iostream>
using namespace std;

int main()

{

int a, b, c ;
float avg;

cout << "Enter first number :---\n";
cin >> a;

cout << "Enter second number :---\n";
cin >> b;

cout << "Enter third number :---\n";
cin >> c;

avg = (a + b + c) / 3 ;

cout << "Average of three numbers is :---\n" << avg << endl;

}