// Square pattern of alphabets.

#include<iostream>
using namespace std;

int main()
{

int n;
int row = 1;
cout << "Enter number of rows upto which you want to print -: ";
cin >> n;
/*
while (row <= n)
{
    int column = 1;
    
    while (column <= n)
    {
        char ch = 'A' + row + column - 2;

        cout << ch << " ";

        column = column + 1;
    }
    
    cout << endl;

    row = row + 1;

}



}

*/

// Alternate -:

while (row <= n)
{
    int column = 1;
    char start = 'A' + row - 1;

    while (column <= n)
    {
        
        cout << start << " ";

        column += 1;

        start += 1;

    }
    
    cout << endl;

    row += 1;

}

}