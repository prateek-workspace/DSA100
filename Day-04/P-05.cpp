// WAP to print sticked screen traingle pattern of stars.

#include<iostream>
using namespace std;

int main ()
{

int n;

cout << "Enter rows upto which you want to print the pattern :---" ;
cin >> n;

int row = 1;

while (row <= n)
{
    int column = 1;
    while (column <= row)
    {
        cout << "*" ;
        column = column + 1;
    }
    
    cout << endl;

    row = row + 1;

}


}