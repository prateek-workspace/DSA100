// WAP to print screen sticked pattern of increasing numbers.

#include<iostream>
using namespace std;

int main()
{

int n;

cout << "Enter number of rows you want to print:---";
cin >> n;

int row = 1;
int a = 1;


while (row <= n)
{
    
    int column = 1;

    while (column <= row)
    {
        cout << a << " " ;
        a += 1 ;
        column +=1;
    }
    
    cout << endl;
    row +=1 ;

}


}