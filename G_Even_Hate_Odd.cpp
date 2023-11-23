#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int k = 0; k < n; k++)
        {
            cin >> ar[k];
        }
        if (n % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int even = 0;
            int odd = 0;
            for (int j = 0; j < n; j++)
            {
                if (ar[j] % 2 == 0)
                {
                    even++;
                }
                else if (ar[j] % 2 == 1)
                {
                    odd++;
                }
            }

            int diff = abs(even - (n / 2));
            cout << diff << endl;
        }
    }

    return 0;
}