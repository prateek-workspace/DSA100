// WAP to print screen sticked pattern of decreasing numbers where first number in each row is the row number.

#include<iostream>
using namespace std;

int main()
{

int n;

cout << "Enter Number of rows upto which you want to print :---";
cin >> n;

int row = 1;

while (row <= n)
{
    int column = 1;
    int key = row;

    while (column <= row)
    {
      cout << key << " ";
      key = key - 1;
      column += 1;
    }
    
    cout << endl;
    row += 1;

}


}