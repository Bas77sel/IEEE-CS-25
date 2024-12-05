#include <iostream> 
#include <algorithm>
using namespace std ;

long long binarysearch (long long A[] , long long city , long long m )
{
    long  long start = 0  , end = m - 1 ;
    long long distance =  LLONG_MAX ;
    while (start <= end)
    {
        long long mid = (start+end) / 2 ;
        distance = min (distance , abs(A[mid]-city)) ;
        if (A[mid]==city)
        {
           return distance ;
        }else if (A[mid] < city)
        {
            start = mid + 1 ;
        }else 
        {
            end = mid - 1 ; 
        }
    }
    
    return distance ;
}


int main () 
{
    long long  n , m; 
    cin >> n >> m ;
    long long cities[n] , towers[m] ;
    for (long long i = 0 ; i<n ; i++)
    {
        cin >> cities[i] ;
    }  
    for (long long i = 0 ; i<m ; i++)
    {
        cin >> towers[i] ;
    } 
    long long r  = 0 ;
    for (long long  i = 0 ; i<n ; i++) 
    {
        r = max (r,binarysearch(towers,cities[i],m)) ;
    }
    cout << r << endl ;


    return 0 ;
}