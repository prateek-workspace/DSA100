// WAP to check whether a number is prime or not for an individual number.

#include <iostream>
using namespace std;

int main ()
{

int n ;
int num = 2;

cout << "Enter Number :---" <<endl;
cin >> n ;

while (num < n)
{

    if (n % num == 0)
    {
        cout << "Non - Prime Number for " << num << endl;
        
    }
    
    else 
    {
        cout << "Prime Number for " << num << endl;
        
    }
 
    num = num + 1 ;

}

}