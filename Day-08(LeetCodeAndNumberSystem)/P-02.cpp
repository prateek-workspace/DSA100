// Leet Code Problem no 191.

// WAP to find number of 1 bits in an integer.


#include<iostream>
using namespace std;

int main ()
{

    int n;
    int count = 0;
    cout << "Enter number -:  ";
    cin >> n;

    // running loop until number becomes 0.

    while ( n != 0 )
    {
       // since here using and (&) it comes true when both are true so whenever last bit of no becomes 
       // 1 it returns 1.
        if ( n & 1 )
        {
            // condition fulfilled, increasing count.

            count ++;
        }
        
        // here shifting number by 1 bits right

        n = n >> 1;

    }
    
    cout << count ;

}