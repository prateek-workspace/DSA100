// WAP to print star pattern of traingle followed in by spaces.

#include<iostream>
using namespace std;

int main ()
{

int n;
cin >> n;

int row = 1;

while (row <= n)
{
    
    int space = n - row;

// prints spaces.

    while (space)
    {

        cout << " ";

        space = space - 1;

    }
    
    int column = 1;

// prints stars.

    while (column <= row)
    {
        cout << "*";

        column += 1;

    }
    
    cout << endl;

    row += 1;

}


}