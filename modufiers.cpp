#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // string a = "Hello";
    // string b = "A";
    // a+=b;
    // a.append(b);
    // cout << a << endl;
    // cout << b << endl;
    // a = "HelloA"; //works
    // a = a+"A"; // -> works
    // a.push_back('A');
    // a.pop_back();
    // a.pop_back();

    string a="Hello";
    a = "Gello";
    a.assign("Hello");
    cout << a << endl;
    string a = "Helloworld";
    a.erase(4,3);
    a.replace(4,3,"so");
    a.insert(5,"Sadid");
    cout << a << endl;
    return 0;
}