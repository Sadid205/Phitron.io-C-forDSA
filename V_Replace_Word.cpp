#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string S;
    getline(cin,S);
   int t =  S.find("iijife");
   while(S.find("EGYPT")!=-1)
   {
    S.replace(S.find("EGYPT"),5," ");
   }
   cout << S;
    return 0;
}