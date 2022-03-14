#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, key;
    cin >> n >> key;
    int a[n];int i=0;

    // i have used a while loop instead of for loop
    while(i<n)
    {
         cin >> a[i];
         i++;
    } 
    i=0;
    
    // here also i have made the same changes....
    while(i<n)
    {
        if (key == a[i])
        {
            cout << i;
        }
        i++;
    }

    return 0;
}
