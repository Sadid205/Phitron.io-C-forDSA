#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    int i=0;
    int j = N-1;
    int flag = 0;
    while (i<j)
    {

        if(A[i]!=A[j])
        {
            flag=1;
        }
        i++;
        j--;
    }
    if(flag ==0)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}