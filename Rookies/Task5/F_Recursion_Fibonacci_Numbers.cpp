#include <iostream>
#include <algorithm>
using namespace std;

int Algorithm (int n)
{
    if (n == 0)
    {
        return 0 ;
    }else if (n == 1) 
    {
        return 1 ;
    }else
    {
       return Algorithm (n-1) + Algorithm (n-2) ;
    }
    
}

int main()
{
  int n ;
  cin >> n ;
  cout << Algorithm(n) << endl ;
    return 0;
}