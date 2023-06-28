// WAP to print square pattern of alphabets (Increassing)

#include<iostream>
using namespace std;

int main()
{

int n;

cout << "Enter rows upto which you want to print -: ";
cin >> n;

int row = 1;

while (row <= n)
{
    
    int col = 1;

    

    while (col <= n )
    {
        char a = 'A' + col - 1;

        cout << a << " ";

        col = col + 1;

    }
    
    cout << endl;
    row = row + 1;

}


}