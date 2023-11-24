#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp (Student a,Student b)
    {
        if(a.eng_marks==b.eng_marks) 
        {
            if(a.math_marks==b.math_marks)
            {
                return a.id<b.id;
            }
            else
            {
                return a.math_marks>b.math_marks;
            }
        }
        else return a.eng_marks > b.eng_marks;
       
    }
int main ()
{
    int N;
    cin>>N;
    Student ar[N];
    for(int i=0;i<N;i++)
    {
        cin>>ar[i].nm>>ar[i].cls>>ar[i].s>>ar[i].id>>ar[i].math_marks>>ar[i].eng_marks;
    }
    sort(ar,ar+N,cmp);
    for(int i=0;i<N;i++)
    {
        cout<<ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;
    }
    return 0;
}