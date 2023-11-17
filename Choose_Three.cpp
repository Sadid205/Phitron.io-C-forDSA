#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int T;
    cin >> T;
    for(int m=0;m<T;m++)
    {
        int N,S;
        cin>>N>>S;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin >> A[i];
        }
        int flag = 0;
        for(int i=0;i<N-2;i++)
        {
            for(int j = i+1;j<N-1;j++)
            {
                for(int k=j+1;k<N;k++)
                {
                    int sum = A[i]+A[j]+A[k];
                    if(sum == S)
                    {
                        flag=1;
                       
                    }
                  
                }
                
            }
        }
        if(flag==1)
        {
            cout <<"YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}