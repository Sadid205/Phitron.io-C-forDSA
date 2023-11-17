#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char S,Q;
    int A,B,C;
    cin >> A >> S >> B >> Q >> C;
  
    int sub = A-B;
    int multi = A*B;
     int sum = A+B;
    if(S=='+')
    {
        if(C!=sum)
        {
            cout << sum<<endl;
           
            
        }
        else 
        {
             cout << "Yes"<< endl;
        }
      
    }
    else if(S=='-')
    {
          if(C!=sub)
          {
            cout << sub << endl;
          }
          else
          {
              cout << "Yes" << endl;
          }
    }
    else if(S=='*')
    {
        if(C!=multi)
        {
                cout << multi << endl;
        }
        else
        {
             cout << "Yes" << endl;
        }
    }
    return 0;
}