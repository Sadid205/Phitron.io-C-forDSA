#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(string name,int roll,char section,int math_marks,int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main ()
{
    Student Korim("Korim",3432,'A',30,10);
    Student Harun("Harun",34,'C',53,10);
    Student Shofiur("Shofiur",343,'B',34,10);
    int highest = max({Korim.math_marks,Harun.math_marks,Shofiur.math_marks});
    if(highest==Korim.math_marks)
    {
        cout << Korim.name<< endl;
    }
    else if(highest==Harun.math_marks)
    {
        cout << Harun.name<< endl;
    }
    else if(highest==Shofiur.math_marks)
    {
        cout << Shofiur.name << endl;
    }
    return 0;
}