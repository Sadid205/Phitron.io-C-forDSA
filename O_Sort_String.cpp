#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin >> N;
    int frq[26] = {0};
    for(int i=0;i<N;i++)
    {
        char S;
        cin >> S;
        int value = S-'a';
        frq[value]++; 
    }
    for(int i=0;i<26;i++)
    {
        if(frq[i]!=0)
        {
            for(int j=0;j<frq[i];j++)
            {
                char Character = i+'a';
                cout << Character;
            }
        }
    }
    cout << endl;
    return 0;
}