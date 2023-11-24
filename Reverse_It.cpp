#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls;
    char section;
    int stdId;
};
int main ()
{
  int N;
  cin >>N;
   Student *Arr = new Student[N];
  for(int i=0;i<N;i++)
    {
        cin >> Arr[i].name >> Arr[i].cls >> Arr[i].section >> Arr[i].stdId;
    }
    int i=0;
    int j=N-1;
   while(i<j)
    {

       swap(Arr[i].section,Arr[j].section);
        i++;
        j--;
    }
    for(int i=0;i<N;i++)
    {
        cout<< Arr[i].name << " " << Arr[i].cls << " " << Arr[i].section << " " << Arr[i].stdId << endl;
    }
    return 0;
}