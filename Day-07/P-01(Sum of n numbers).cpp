// WAP to print sum of all numbers upto n.

#include<iostream>
using namespace std;

int main()
{

    int n;
    int sum = 0;
    cout << "Enter value upto which you want sum -: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        
        sum = sum + i ;

    }
    
    cout << "Sum is -: " << sum ;

}