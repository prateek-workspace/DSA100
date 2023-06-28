// WAP to print triangular pattern of alphabets.

#include<iostream>
using namespace std;

int main()
{

int n;
cout << "Enter number of rows you want to print -: ";
cin >> n;


int row = 1;

while (row <= n)
{
    int column = 1;

    //char ch = 'A' + row - 1;

    while (column <= row)
    {
       char ch = 'A' + column + row - 2;

        cout << ch << " ";
        //ch += 1;
        column += 1;

    }
    
    cout << endl;
    row = row + 1;
}


}