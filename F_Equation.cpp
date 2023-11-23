#include<bits/stdc++.h>
using namespace std;
double Equation(int X,int N)
{
    double sum = 0;
    for(int i=2;i<=N;i=i+2)
    {
        sum += pow(X*1.0,i*1.0);   
    }
    return sum;
}
int main ()
{
    int X,N;
    cin>>X>>N;
    long long int summation = Equation(X,N);
    cout << summation;
    return 0;
}