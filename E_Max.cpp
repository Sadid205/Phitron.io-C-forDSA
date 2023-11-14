#include <bits/stdc++.h>
using namespace std ;
int main ()
{

    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    int max = INT_MIN;
    for(int i=0;i<N;i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }
    cout << max;
    return 0;
}