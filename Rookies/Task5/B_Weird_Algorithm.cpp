#include <iostream>
using namespace std ;

void Algorithm (long long n)
{
  long long temp = n ;
  while (temp != 1)
  {
    if (temp%2==0)
    {
        temp /= 2 ;
    }else
    {
        temp *= 3 ;
        temp ++ ;
    }
    cout << temp << " " ;
  }
}

int main () 
{
    long long n ;
    cin >> n ;
    cout << n << " " ;
    Algorithm(n) ;
    return 0 ;
}