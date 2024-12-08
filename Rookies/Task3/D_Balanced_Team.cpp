#include <iostream>
#include <algorithm>
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
    sort(A,A+n) ;
    int start = 0 , end = 0 , maxstudent = 0 ;
    while (end < n)
    {
        if (A[end]-A[start] <= 5)
        {
            maxstudent = max(maxstudent,end - start + 1) ;
            end ++ ;
        }else 
        {start ++ ;}
    }
    cout << maxstudent ;
   return 0 ;
}
