// WAP to print star pattern of traingle followed up by spaces.

#include<iostream>
using namespace std;

int main()
{

int n;
cin >> n;

int column , row = 1;

while (row <= n)
{
    
    int star = n - row + 1;

// prints star.

    while (star)
    {
        
        cout << "*";

        star -= 1;

    }
    
    while (column <= row)
    {
        cout << " ";

        column += 1;
    }
    
    cout << endl;

    row += 1;

}


}