// WAP to print numbers upto which user wants.

#include<iostream>
using namespace std;

int main ()
{

int n;

cout << "Enter Number until you want to print :---" << endl;
cin >> n;

int i = 1;

while (i <= n)
{
    cout << i << " " ;
    i = i + 1;
}


}