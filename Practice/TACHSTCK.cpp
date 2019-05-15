#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    int n, d; cin >> n >> d;
    vector<lli> arr;

    for(lli i=0; i<n; i++)
    {
        lli temp; cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    lli count=0;
    for(lli i=0; i<n-1; i++)
    {
        if(arr[i+1]-arr[i] <= d)
        {
            count++; i++;
        }
    }
    cout << count << endl;
}