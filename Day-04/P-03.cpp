// WAP to print square pattern in which there are increasing numbers acroos any row and the value of row get increaed by 1 while going down in it.

#include<iostream>
using namespace std;

int main()
{

int n;
cout << "Enter number of rows upto which you want to print :---" ;
cin >> n;

int row = 1;

while (row <= n)
{
    
int column = 1;

while (column <= n)
{
    cout << column << " " ;

    column = column + 1;
}

cout << endl;

row = row + 1;

}


}