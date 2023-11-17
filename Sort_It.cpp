#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    int B[N];
    for(int i=0;i<N;i++)
    {
        B[i] = A[i];
    }
   sort(A,A+N);
    for(int i=0;i<N;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
   sort(B,B+N,greater<int>());
    for(int i=0;i<N;i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}