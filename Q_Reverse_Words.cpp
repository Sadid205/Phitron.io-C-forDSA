#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string S;
    getline(cin,S);
    stringstream ss(S);
    string word;
    bool firstWord = true;
    while(ss>>word)
    {
        reverse(word.begin(),word.end());
       if(firstWord)
       {
         cout << word;
       }
       else 
       {
        cout << " " << word;
       }
      firstWord = false;
    }
    

    return 0;
}