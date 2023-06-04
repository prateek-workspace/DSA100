// WAP to print sum upto n numbers where n is the number upto user wants to get sum calculated.

#include<iostream>
using namespace std;

int main()
{

int n ;

cout << "Enter number upto which you want to get sum calculated :---" << endl;
cin >> n ;

int i = 0;
int sum = 0;

while (i <= n)
{
    sum = sum + i ;
    i = i + 1;
}

cout << "Sum is :--" << sum << endl;

}