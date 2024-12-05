#include <iostream>
#include <algorithm>
using namespace std ;

long long binarysearch (long long A[],long long n,long long value)
{
    long long start , end , counter = 0  ;
    start = 0 ;
    end = n-1 ;
    
    while (start <= end)
    {

    long long  mid = (start + end ) / 2 ;
    if (A[mid] <= value)
    {
        counter = mid + 1;
        start = mid + 1 ;
    }else
    {
        end = mid - 1 ; 
    }
    }
   
    return counter ;
}
int main ()
{
    long long n , q  ;
    cin >> n ;
    long long A[n] ;
    for (int i = 0 ; i<n ; i++)
    {
       cin >> A[i] ;
    }

    sort ( A , A+n) ;

    cin >> q ;

    for (int i = 0 ; i<q ; i++)
    {
        long long money ;
        cin >> money ;
        cout << binarysearch(A,n,money) << endl ;
    }
    

    return 0 ;
}