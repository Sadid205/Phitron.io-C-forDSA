#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int N;
    cin >> N;
    int *A = new int[N];
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    int M;
    cin>>M;
    int *B = new int [M];
    for(int i=0;i<N;i++)
    {
        B[i] = A[i];
    }
    delete[] A;
    int sub = M-N;
    int *C = new int [sub];
    for(int i=0;i<sub;i++)
    {
        cin>>C[i];
    }
    int j = 0;
    for(int i=N;i<M;i++)
    {
           B[i] = C[j];
           j++;
    }
    for(int i=0;i<M;i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}