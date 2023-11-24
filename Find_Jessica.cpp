#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string S;
    getline(cin,S);
    int count =0;
    stringstream ss(S);
    string word;
    while(ss>>word)
    {
        if(word=="Jessica")
        {
            count=1;
        }
    }
    if(count==1)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}