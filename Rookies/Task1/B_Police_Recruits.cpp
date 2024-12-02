#include <iostream>
using namespace std ;

int main ()
{
 int n , counter = 0 , Holder = 0 ; 
 cin >> n ;
 int A[n] ;
 for (int i = 0 ; i<n ; i++)
 {
cin >> A[i] ;
 }
 for (int i = 0 ; i<n ; i++) 
 {
     if (A[i]>0)
     {
        Holder += A[i] ;
     }else 
     {
        if (Holder + A[i] >= 0)
        {
            Holder-- ;
            continue ;
        }else 
        {
            counter ++ ;
        }
     }
 } 
 cout << counter << endl ;
    return 0 ;
}