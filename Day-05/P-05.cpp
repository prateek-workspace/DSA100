// WAP to print triangular pattern of alphabets.

#include<iostream>
using namespace std;

int main()
{

int n;
cout << "Enter number of rows upto which you want to print -: ";
cin >> n;

int row = 1;

while (row <= n)
{
    int column = 1;

    while (column <= row)
    {
        char ch = 'A' + row - 1;
        
        cout << ch << " ";

        column += 1;    
    }
    
    cout << endl;

    row += 1;

}


}