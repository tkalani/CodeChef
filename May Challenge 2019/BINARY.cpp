#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;
    while(test--)
    {
        int n, z;
        cin >> n >> z;

        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];

        while(z--)
        {
            for(int i=0; i<n-1; i++)
                if(arr[i] == 0 && arr[i+1] == 1)
                {
                    arr[i] = 1;
                    arr[i+1] = 0;
                    i++;
                }
        }
        for(int i=0; i<n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}