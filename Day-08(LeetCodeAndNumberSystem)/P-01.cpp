// LeetCode Problem Number 1281.

// WAP to subtract the product and sum of digits of an integer.

#include<iostream>
using namespace std;

int main ()
{

    int n ;
    cout << "Enter Number -: ";

    // taking input 

    cin >> n;

    int product = 1;
    int sum = 0;  

    // running loop til number becomes 0.

    while (n != 0)
    {

        // gaining digits of number through floor division.

        int digit = n % 10;
        sum = sum + digit ;
        product = product * digit ;

        // decreasing number by dividing it.

        n = n / 10;

    }

    // printing output.

    cout << (product - sum);


}