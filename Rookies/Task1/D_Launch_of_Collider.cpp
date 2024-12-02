#include <iostream>
using namespace std ;
int main ()
{
    int n , min = INT_MAX;
    cin >> n ;
    string Directions ;
    cin >> Directions ;
    int A[n] ;
    for (int i = 0 ; i<n-1 ; i++)
    {cin >> A[i] ;}
    for (int i = 0 ; i<n ; i++)
    {
        if (Directions[i]=='R'&&Directions[i+1]=='L')
        {
             if (min > (A[i+1]-A[i])/2)
             min =(A[i+1]-A[i])/2 ;
        }
    }
    if (min == INT_MAX)
    {
        cout << "-1" << endl ; 
    }else
    {
        cout << min << endl ;
    }
    
    return 0 ;
}
