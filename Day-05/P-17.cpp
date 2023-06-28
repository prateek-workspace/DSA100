#include<iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        
        int num1 = n - row + 1;
        int column = 1;
        while (num1)
        {
            cout << column;

            column = column + 1;

            num1 --;

        }

        int star1 = row - 1;

        while (star1)
        {
            
            cout << "*";

            star1 --;

        }

        int star2 = row - 1;

        while (star2)
        {
            
            cout << "*";

            star2 --;

        }
        
        int num2 = n - row + 1;

        while (num2)
        {
            
            cout << num2;

            num2 --;

        }
        
        cout << endl;
        row = row + 1;

    }
    

}