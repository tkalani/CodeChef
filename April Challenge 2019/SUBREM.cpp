#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        lli N, X, sum=0;
        cin >> N >> X;

        vector< pair<lli, lli> > cell_val;
        vector<lli> arr[N];
        // vector<vector<lli> > arr = vector< vector<lli> > (N, vector<lli>);

        for(lli i=0; i<N; i++)
        {
            lli temp; cin >> temp;
            cell_val.push_back(make_pair(temp, sum));
        }
        
        for(lli i=0; i<N-1; i++)
        {
            lli n1, n2;
            cin >> n1 >> n2;

            arr[n1-1].push_back(n2-1);
            arr[n2-1].push_back(n1-1);
        }

        for(lli i=0; i<N; i++)
        {
            for(lli j=0; j<arr[i].size(); j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}