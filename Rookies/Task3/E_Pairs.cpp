#include <iostream>
#include <algorithm>
using namespace std ;
long long counter (long long k , long long A[] , long long n) 
{
    long long start = 0 , end = 0 , maxstudent = 0 ;
    while (end<n)
    {
        if (A[end]-A[start] == k)
        {
            maxstudent ++ ;
            start ++ ;
        } else if (A[end] - A[start] < k) {
            end++;  
        } else {
            start++;  
        }
    }
    return  maxstudent ;
}
int main ()
{
    long long n , k ;
    cin >> n >> k ;
    long long A[n] ;
    for (long long i = 0 ; i<n ; i++)
    {
        cin >> A[i] ;
    }
    sort(A,A+n) ;
    cout << counter(k,A,n) << endl ;
    
   return 0 ;
}
