#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    int arr[N];

    for(int i=0; i<N; i++)
        cin >> arr[i];

    int count=0;

    sort(arr, arr+N);

    int i=0,j=N-1;
	while(i<j)
	{
	    while(i<j && arr[i]+arr[j]>=K)
            j--;
	    count += (j-i);
	    i++;
	}
    
    cout << count << endl;
}