#include <iostream>
using namespace std ;

int main ()
{
   int n ;
   cin >> n ; 
   int A[n] ;
   for (int i = 0 ; i<n ; i++)
   {
        cin >> A[i] ;
   }
   int minindex = 0 , maxindex = 0 ;
   for (int i = 0 ; i<n ; i++)
   {
    if (A[minindex]>=A[i])
    {
        minindex = i ;
    }
    if (A[maxindex]<A[i])
    {
        maxindex = i ;
    }
   }
   int counter = maxindex + n-1-minindex ;
   if (maxindex>minindex)
   {counter -- ;}
   cout << counter << endl ;

    return 0 ;
}