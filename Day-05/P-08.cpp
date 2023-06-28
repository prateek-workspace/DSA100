// WAP for triangular alphabet pattern.

#include<iostream>
using namespace std;

int main()
{

int n;
cin>> n;

int row = 1;

while (row <= n)
{
    int column = 1;

    char start = 'A' + n - row;

    while (column <= row)
    {
        cout << start << " ";

        column += 1;

        start += 1;
    }
    
    cout << endl;

    row += 1;

}


}