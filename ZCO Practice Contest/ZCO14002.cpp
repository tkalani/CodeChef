#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N], sum[N];

    for(int i=0; i<N; i++)
        cin >> arr[i];

    if(N==1)
        cout << arr[0] << endl;
    else if(N==2)
        cout << min(arr[0], arr[1]) << endl;
    else
    {
        sum[0] = arr[0];
        sum[1] = arr[1];
        sum[2] = arr[2];

        for(int i=3; i<N; i++)
            sum[i] = arr[i] + min(sum[i-3], min(sum[i-2], sum[i-1]));
        
        cout << min(sum[N-1], min(sum[N-2], sum[N-3])) << endl;
    }
}