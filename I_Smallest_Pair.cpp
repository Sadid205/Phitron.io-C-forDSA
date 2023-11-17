#include<bits/stdc++.h>
using namespace std;
int main ()
{
    
    int T;
    cin>>T;
    for(int m=0;m<T;m++)
    {
        int maximum = INT_MAX;
        int N;
        cin >> N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin >> A[i];
        }
        for(int j=0;j<N-1;j++)
        {
            for(int k=j+1;k<N;k++)
            {
                int result = A[j]+A[k]+k-j;
                maximum = min(result,maximum);
            
            }
        }

        cout << maximum << endl;
    }
    return 0;
}