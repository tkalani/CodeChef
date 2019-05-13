#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, max=int_MIN;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);
    for(int i=0; i<n-1; i++)
        if(arr[i]%arr[i+1] > max)
            max = arr[i]%arr[i+1];
    cout << max << endl;
}