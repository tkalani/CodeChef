#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int N, K, count = 0;
    // cin >> N >> K;
    // int arr[N];

    // for(int i=0; i<N; i++)
    //     cin >> arr[i];
    
    // for(int i=0; i<N; i++)
    //     for(int j=i+1; j<N; j++)
    //         if(abs(arr[i]-arr[j]) >= K)
    //             count++;

    // cout << count << endl;
    // return 0;

    int N, K, count = 0, j;
    cin >> N >> K;
    int arr[N];

    for(int i=0; i<N; i++)
        cin >> arr[i];

    sort(arr, arr+N);

    for (int i = 0; i < N; i++)
    {
        int j;
        for (j=i+1; j<N && abs(arr[j]-arr[i])<K; j++);
            count += (N - j);
    }
        

    cout << count << endl;
}