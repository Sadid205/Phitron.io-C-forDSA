#include<bits/stdc++.h>
class Student 
{
    public:
    int id;
    char name[101];
    char section;
    int total_marks;
    Student(int id,char name[101],char section,int total_marks)
    {
        this->id = id;
        strcpy(this->name,name);
        this->section = section;
        this->total_marks = total_marks;
    }

};
using namespace std;
int main ()
{
    int T;
    cin >> T;
    for(int i=0;i<T;i++)
    {
       int id1,id2,id3;
       char name1[101],name2[101],name3[101];
       char section1,section2,section3;
       int total_marks1,total_marks2,total_marks3;
       
       cin>>id1>>name1>>section1>>total_marks1;
       cin>>id2>>name2>>section2>>total_marks2;
       cin>>id3>>name3>>section3>>total_marks3;

       Student A(id1,name1,section1,total_marks1);
       Student B(id2,name2,section2,total_marks2);
       Student C(id3,name3,section3,total_marks3);

    int maximum = max({A.total_marks,B.total_marks,C.total_marks});
       if(maximum == A.total_marks && maximum==B.total_marks)
       {
            if(A.id < B.id)
            {
                cout << A.id << " " << A.name << " " << A.section << " " << A.total_marks << endl;
            }
            else 
            {
                cout << A.id << " " << B.name << " " << B.section << " " << B.total_marks << endl;
            }
       }
       else if(maximum == A.total_marks && maximum==C.total_marks)
       {
            if(A.id < C.id)
            {
                cout << A.id << " " << A.name << " " << A.section << " " << A.total_marks << endl;
            }
            else 
            {
                cout << C.id << " " << C.name << " " << C.section << " " << C.total_marks << endl;
            }
       }
        else if(maximum == B.total_marks && maximum==C.total_marks)
       {
            if(B.id < C.id)
            {
                cout << B.id << " " << B.name << " " << B.section << " " << B.total_marks << endl;
            }
            else 
            {
                cout << C.id << " " << C.name << " " << C.section << " " << C.total_marks << endl;
            }
       }
       else 
       {
        if(maximum == A.total_marks)
        {
            cout << A.id << " " << A.name << " " << A.section << " " << A.total_marks << endl;
        }
        else if(maximum == B.total_marks)
        {
                cout << B.id << " " << B.name << " " << B.section << " " << B.total_marks << endl;
        }
        else
        {
                cout << C.id << " " << C.name << " " << C.section << " " << C.total_marks << endl;
        }
       }
    }

    return 0;
}