#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    // stringstream ss(s);
    stringstream ss;
    ss << s;
    string world;
    int cnt = 0;
    // while (ss>> world)
    // {
    //     cout << world << endl;
    // }
    while (ss>> world)
    {
       cnt++;
    }
    cout << cnt << endl;

    return 0;
}