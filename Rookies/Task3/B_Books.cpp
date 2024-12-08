#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    int n , t ;
    cin >> n >> t ;
    int A[n] ;
    for (int i = 0 ; i<n ; i++)
    {
        cin >> A[i] ;
    }
    int start = 0 , time = 0 , bookcounter = 0  ;
    for (int i = 0 ; i<n ; i++)
    {
        time += A[i] ;
        while (time > t)
        {
            time -= A[start] ;
            start ++ ;
        } 
        bookcounter = max(bookcounter , i-start+1) ; 
    }
    cout << bookcounter << endl ;
    
    return 0;
}