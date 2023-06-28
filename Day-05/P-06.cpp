// WAP to print triangular pattern of alphabets.

#include<iostream>
using namespace std;

int main()
{

int n;
int m = 0;
cout << "Enter number of rows upto which you want to print -: ";
cin >> n;

int row = 1;

while (row <= n)
{
    int column = 1;

    while (column <= row)
    {
        char ch = 'A' + m;

        cout << ch << " ";

        m += 1;

        column += 1;
    }
    
    cout << endl;

    row += 1;

}


}