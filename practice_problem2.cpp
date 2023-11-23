#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll;
    int marks;
};
int main ()
{
    int N;
    cin >> N;
    Student a[N];
    for(int i=0;i<N;i++)
    {
        cin >> a[i].name>> a[i].roll >> a[i].marks;
    }
   
    for(int i=N-1;i>=0;i--)
    {
        cout<< a[i].name << " " << a[i].roll<< " " << a[i].marks<< endl;
    }

    return 0;
}