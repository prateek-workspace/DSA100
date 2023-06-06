// WAP to print square pattern in which there are same number acroos any row and the value of row get increaed by 1 while going down in it.

#include<iostream>
using namespace std;

int main()
{

int n;

cout << "Enter the number of rows of pattern you want :---" ;
cin >> n;

int row = 1;

while (row <= n)
{
    int column = 1;


    while (column <= n)
    {
        cout << row << " " ;

        column = column  + 1;
    }
    
    cout << endl;

    row = row + 1;

}


}