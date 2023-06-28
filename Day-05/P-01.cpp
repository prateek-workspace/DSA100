// WAP to print square pattern of alphabets.

#include<iostream>

using namespace std;

int main()
{

int n;

cout << "Enter rows upto which you want to print -: ";
cin >> n;

int row = 1;

while (row <= n)
{
    int column = 1;

    char ch = 'A' + row - 1;

    while (column <= n)
    {

        cout << ch << " ";

        column = column + 1;

    }
    cout << endl;
    row = row + 1;

}


}  