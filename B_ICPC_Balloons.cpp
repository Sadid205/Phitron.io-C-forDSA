#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int arr[26] = {0};
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            int character = S[i] - 'A';
            if(arr[character]==0)
            {
                count+=2;
                arr[character]++;
            }
            else 
            {
                count+=1;
                arr[character]++;
            }
        }

        cout << count << endl;
    }
    return 0;
}