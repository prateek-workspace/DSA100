#include<iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        
        // printing spaces

    
    int space = n - row;

        // prints spaces.

    while (space)
    {

        cout << " ";

        space = space - 1;

    }
    
    int column = 1;

        // printing first number pattern.
        

        while (column <= row)
        {
            
            cout << column;
            column = column + 1;

        }

        // printing another number paattern.
        int m = (row - 1);


        while (m)
        {
            
            cout << m;
            m--;

        }
        
        cout << endl;
        row ++;


    }
    

}