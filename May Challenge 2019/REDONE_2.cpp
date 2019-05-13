#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    int test; cin >> test;

    lli arr[1000010];
    for(lli i=0; i<1000010; i++)
        arr[i] = 0;
    arr[0] = 1;

    lli mod = 1000000007; 
    while(test--)
    {
        lli n; cin >> n;
        if(arr[n-1] != 0)
            cout << arr[n-1]%mod << endl;
        else
        {
            for(lli i=1; i<n; i++)
            {
                arr[i] = (i+1 + arr[i-1] + (i+1)*arr[i-1])%mod;
            }
            cout << arr[n-1]%mod << endl;
        }
    }
}