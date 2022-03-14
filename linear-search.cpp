#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, key;
    cin >> n >> key;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cout << i;
        }
    }

    return 0;
}
