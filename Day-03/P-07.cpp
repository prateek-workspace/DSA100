// WAP to print sum of only even numbers upto n where n is the number upto user wants to get sum calculated.

#include<iostream>
using namespace std;

int main ()
{

int n;
int i = 0;
int sum = 0;

cout << "Enter number upto which you want sum calculated :---" <<  endl;
cin >> n;

while (i <= n)
{
    if (i % 2 == 0)
    {
        sum = sum + i;
    }
    
    i = i + 1;
}

cout << "Sum is :---" << sum << endl;

}