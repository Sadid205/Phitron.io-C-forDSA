#include <bits/stdc++.h>
using namespace std;
int main () 
{
    
    char A;
    cin >> A;
    int B = A;
    if(B >='A' && B<='Z')
    {
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    }
    else if(B>='a' && B<='z')
    {
        cout << "ALPHA" << endl << "IS SMALL" << endl;
    }
    else if(B>='0' && B<='9')
    {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}