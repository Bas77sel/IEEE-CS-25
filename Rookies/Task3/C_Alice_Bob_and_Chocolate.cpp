#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
   int n ;
   cin >> n ;
   int A[n] ;
   for (int i = 0 ; i<n ; i++)
   {
    cin >> A[i] ;
   }

   int start = 0 , end = n-1 , popcounter = 0 , alicecounter = 0 , poptime = 0 , alicetime  = 0 ;
  while (start<=end)
   {
        if (alicetime <= poptime)
        {
            alicetime += A[start] ;
            alicecounter ++ ;
            start ++ ;
        }else 
        {
            poptime += A[end] ;
            popcounter ++ ;
            end -- ;
        }

   }
   cout << alicecounter << " " << popcounter ;
    return 0;
}