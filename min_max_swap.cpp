#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
// void my_swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp; 
// }
int main ()
{
    int a,b;
    cin>> a >> b;
    swap(a,b);
    // my_swap(&a,&b);
    cout << a << " " << b << endl;
    // int a,b,c,d;
    // cin >> a >> b >> c >> d;
    // int c = min(a,b);
    // int d = max(a,b);
    // cout << c << " " << d << endl;
    
    // int mn = min({a,b,c,d});
    // int mx = max({a,b,c,d});
    // cout << mn << " " << mx << endl;
    return 0;
}