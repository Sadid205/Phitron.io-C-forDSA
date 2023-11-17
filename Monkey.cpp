#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main ()
{
    char S[100001];
    while (cin.getline(S,100001))
    {
        int size = strlen(S);
        int Freq [26] = {0};
        for(int i=0;i<size;i++)
        {
            int value = S[i] -'a';
            Freq[value]++;
        }
        for(int i=0;i<26;i++)
        {
            if(Freq[i]!=0)
            {
               for(int j=0;j<Freq[i];j++)
               {
                 char Character = i+'a';
                cout << Character; 
               }
            }
        }
        cout << endl;
    }


    return 0;
}