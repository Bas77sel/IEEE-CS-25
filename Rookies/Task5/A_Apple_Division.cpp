#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long Algorithm (int check , long long A[] , long long sum1 , long long sum2 , long long n)
{
    if (check == n)
    {
        return abs (sum1-sum2) ;
    }

    long long group1 = Algorithm(check+1 , A , sum1+A[check] , sum2 , n);
    long long group2 = Algorithm(check+1 , A , sum1 , sum2+A[check] , n);

    return min(group1,group2) ;
}
int main()
{
  long long  n ;
  cin >> n ;
  long long  A[n] ;
  for (int i = 0 ; i<n ; i++)
  {
    cin >> A[i] ;
  }
  
    cout << Algorithm (0,A,0,0,n) << endl ;
    return 0;
}