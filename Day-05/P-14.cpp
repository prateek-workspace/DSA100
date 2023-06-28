#include<iostream>
using namespace std;

int main()
{

int n;
cin >> n;

int column , row = 1;

while (row <= n)
{
  
  int space = row - 1;

  while (space)
  {
    
    cout << " ";
    space --;

  }
  
  int num = n - row + 1;

  int i = row;

  while (num)
  {
    
    cout << i;
    num --;
    i ++;
  }

  cout << endl;
  row ++;

}

}