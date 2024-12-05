#include <iostream>
#include <algorithm>
using namespace std ;

long long binarysearch (long long A[] , long long first , long long n , long long d)
{
   long long start = first + 1 , end = n - 1 ;
   long long pos = first ;
   while (start <= end)
   {
    long long mid = (start+end) / 2 ;
    if (A[mid] - A[first] <= d)
    {
        pos = mid ;
        start = mid + 1 ;
    }else 
    {
        end = mid - 1 ;
    }
   } 
   return pos ;
}

int main () 
{
   long long n , d , counter = 0 ;
   cin >> n >> d ;
   long long  A[n] ;
   for (int i  = 0 ; i<n ; i++)
   {
    cin >> A[i] ;
   }

   for (int i = 0 ; i<n ; i++)
   {
    long long range = binarysearch(A,i,n,d) - i ;
    if (range >=2) 
    {
        counter = counter + (range * (range-1)) / 2 ;
    
    }
   }
   
    cout << counter << endl ; 
    return 0 ;
}