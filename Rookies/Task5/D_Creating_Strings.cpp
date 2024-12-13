#include <iostream>
#include <algorithm>
using namespace std;

void Algorithm(string s, int check , string A [] , int &counter)
{
    if (check == s.size())
    {
        A[counter++] = s ;
        return ;
    }
    for (int i = check; i < s.size(); i++)
    {
        bool flag = true;
        for (int j = check; j < i; j++)
        {
            if (s[j] == s[i]) {
            flag = false;
            break;
            }
        }
        if (!flag)
        {
            continue;
        }

        swap(s[check], s[i]);
        Algorithm(s, check + 1 , A , counter);
        swap(s[check], s[i]) ;
    }
}

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int maxnum = 1;
    for (int i = 2; i <= s.size(); i++)
    {
        maxnum *= i;
    }
    string A[maxnum];
    int counter = 0;
    Algorithm(s, 0 , A , counter);
    cout << counter << endl ;
    sort(A,A+counter) ;
    for (int i = 0; i < counter; i++) {
        cout << A[i] << endl;
    }
    return 0;
}