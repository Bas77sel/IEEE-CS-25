#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long  lbinarySearch(long long A[] , long long  start , long long end , long long  value) {
    long long  left = start, right = end;
    while (left < right) {
        long long  mid = left + (right - left) / 2;
        if (A[mid] >= value) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}


long long  rbinarySearch(long long A[] , long long start , long long end , long long value) {
    long long left = start, right = end;
    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (A[mid] > value) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}


long long  count_pairs(long long n, long long l, long long  r, long long A[]) {
    long long count = 0;
    for (long long i = 0; i < n; i++) {
        long long low = l - A[i];
        long long high = r - A[i]; 

       
        long long  left = lower_bound(A + i + 1, A+n, low) - A;
        long long  right = upper_bound(A + i + 1, A+n, high) - A;
        count += (right - left);
    }

    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long  n, l, r;
        cin >> n >> l >> r;
        
        long long A[n] ;
        for (long long  i = 0; i < n; ++i) {
            cin >> A[i];
        }
        sort(A,A+n) ;
        cout << count_pairs(n, l, r, A) << endl;
    }
    
    return 0;
}
