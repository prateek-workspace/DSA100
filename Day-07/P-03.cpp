// WAP to find whether number is prime or not.

#include<iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter Number -: ";

    // input taken

    cin >> num ;

    bool isPrime = 1;
    // set a bool variable as true.
    // here we are assuming that number is prime.

    for (int i = 2; i < num; i++)
    {
        
        // running the loop.

        if ( (num % i) == 0  )
        {
            
            // since loop runs every time i gets updated,
            //if num % i comes out 0, it will not be a prime.

            isPrime = 0;
            break;

            //whwn num % i comes 0,
            // our assumption that number is prime will be wrong,
            // now updating isPrime to false.
        }
        
    }
    
    if (isPrime == 0)
    {
        
        cout << " Not a Prime Number ";

    }

    else
    {

        cout << " A Prime Number ";

    }
    

}