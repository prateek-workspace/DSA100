// WAP to print screen sticked pattern of numbers in which first one is eaual to its row number in each row then increases accordingly.

#include<iostream>
using namespace std;

int main()
{

int n ;
cout << "Enter row upto which you want to print :---";
cin >> n;

int row = 1;

while (row <= n)
{
    int column = 1;
    int key = row;

    while (column <= row)
    {
        cout << key << " ";

        key += 1;

        column += 1;

    }
    
    cout << endl;

    row += 1;

}


}