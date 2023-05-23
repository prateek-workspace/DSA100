//WAP to find cube of any number.

#include<iostream>
//#include<math.h>
using namespace std;

int main()

{

float n, cube;

cout << "Enter number you want cube of :----\n";
cin >> n;

cube = n * n * n ;
// other way to calculate cube using library math.h
//cube =  pow(n,3);

cout <<"Cube of entered number is :---\n" << cube << endl;


}