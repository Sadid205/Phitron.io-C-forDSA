#include <bits/stdc++.h>
using namespace std;
int main()
{

     int t = 0;
     cin >> t;
   for(int k=0;k<t;k++)
   {
    string S;
   cin >> S;
   int sum = 0;
   int sum2 = 0;
   for(int i=0;i<=2;i++)
   {
       sum+=S[i];
   }
   for(int i=5;i>=3;i--)
    {
            sum2+=S[i];
    }
   if(sum==sum2)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
   }
    return 0;
}