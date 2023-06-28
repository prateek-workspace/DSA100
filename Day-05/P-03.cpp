// WAP to print square pattern of alphabets all of which are increasing.

#include<iostream>
using namespace std;

int main()
{

int n;
int row = 1;
char ch = 'A';

cout << "Enter Number of rows upto which you want to print -: ";
cin >> n;

while (row<=n)
{
    
    int column = 1;

    while (column <= n)
    {
        
        cout << ch << " " ;

        column = column + 1;

        ch = ch + 1;

    }
    
    cout << endl;

    row = row + 1;

}


}