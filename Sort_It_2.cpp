#include<bits/stdc++.h>
using namespace std;
int*  sort_it(int n)
{
    int *arr = new int [n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    return arr;
}
int main ()
{
    int N;
    cin >> N;
    int *array =  sort_it(N);
    for(int i=0;i<N;i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}