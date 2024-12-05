#include <iostream>
using namespace std ;

long long calculatelines (long long v , long long k) 
{
  long long lines = 0 ;
  while (v>0)
  {
    lines += v ;
    v /= k ;
  } 
  return lines ;
} 

int main()
{
 long long n , k ;
 cin >> n >> k ;

 long long start , end , lines ;
 start = 1 ;
 end = n ;
 lines = n ;
 while (start <=  end) 
 {
    long long mid = (start + end) / 2 ;
    if (calculatelines(mid , k) >= n)
    {
        lines = mid ;
        end = mid -1 ;
    }else
    {
        start = mid + 1 ;
    }
 }

 cout << lines << endl ;

 return 0 ; 
}