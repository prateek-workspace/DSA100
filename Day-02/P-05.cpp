// WAP to calculate simple intrest.

#include<iostream>
using namespace std;

int main ()

{

float p , r , t , si;

cout << "Enter principal amount :---\n";
cin >> p;

cout << "Enter rate charged :---\n";
cin >> r;

cout << "Enter time duration in years :---\n";
cin >> t;

si = (p * r * t) / 100;

cout << "Simple Intrest is :---\n " << si << endl;

}