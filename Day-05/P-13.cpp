// WAP to print number pattern of traingle followed in by spaces.

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

        space--;

    }
    
    int column = 1;

// prints numbers.

    while (column <= row)
    {
        cout << row;

        column ++;

    }
    
    cout << endl;

    row ++;

}


}