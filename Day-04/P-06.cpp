// WAP to print screen sticked pattern of number equal to its row's number.

#include<iostream>
using namespace std;

int main()
{

int n;

cout << "Enter number of rows you want to print :---";
cin >> n;

int row = 1;

while (row <= n)
{
    int column = 1;

    while (column <= row)
    {
        cout << row ;

        column += 1;
    }
    
    cout << endl;

    row += 1;

}


}