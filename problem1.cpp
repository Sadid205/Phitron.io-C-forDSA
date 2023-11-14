#include <bits/stdc++.h>
using namespace std;

int *get_array(int n)
{
    int *ar = new int [n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    return ar;
}

int main()
{
    int N;
    cin>>N;
    int *Arr = get_array(N);
    for(int i=0;i<N;i++)
    {
        cout << Arr[i]<< " ";
    }
}