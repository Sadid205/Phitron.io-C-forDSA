#include<bits/stdc++.h>
using namespace std;
class Student  
{
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if(a.marks==b.marks) return a.roll < b.roll;
    else return a.marks > b.marks;
    
}
int main ()
{
    
    int N;
    cin >> N;
    Student a[N];
    for(int i=0;i<N;i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a,a+N,cmp);
    for(int i=0;i<N;i++)
    {
        cout<< a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}