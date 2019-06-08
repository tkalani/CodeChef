#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli MOD = 1000000007;
    lli arr[1000000];
    arr[1] = 10;

    lli test; cin >> test;
    while(test--)
    {
        lli k; cin >> k;

        if(arr[k])
            cout << arr[k]%MOD << endl;
        else
        {
            for(lli i=2; i<k+1; i++)
                arr[i] = (arr[i-1] + 10*(lli)(pow(2, i-2)))%MOD;
            cout << arr[k]%MOD << endl;
        }
    }
}