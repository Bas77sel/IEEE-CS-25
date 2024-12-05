#include <iostream>
#include <algorithm>
using namespace std ;

long long binarysearch (long long first , long long time , long long sum [] , long long n )
{
    long long start = first , end = n , value = first ;
    while (start <= end)
    {
        long long mid = (start + end) / 2 ;

        if (sum[mid] - sum[first] <= time)
        {
            value = mid ;
            start = mid + 1 ; 
        }else 
        {
            end = mid - 1 ;
        }
    }
    return value ;
}

int main () 
{
   long long n , t ;
   cin >> n >> t ;
   long long A[n] , sum[n+1] ;
   for (int i = 0 ; i<n ; i++)
   {
    cin >> A[i] ;
   }
   sum[0] = 0 ;
   for (int i = 0 ; i<n ; i++)
   {
    sum[i+1] = sum[i] + A[i] ;
   }

   long long max_value = 0 ;

   for (long long i = 0 ; i<n ; i++)
   {
     max_value = max (max_value , binarysearch(i,t,sum,n)-i) ;
   }  

   cout << max_value << endl ; 

}