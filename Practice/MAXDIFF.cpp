#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;
    while(test--)
    {
        int N, K;
        cin >> N >> K;

        vector<int> weights;
        for(int i=0; i<N; i++)
        {
            int temp; cin >> temp;
            weights.push_back(temp);
        }

        sort(weights.begin(), weights.end());

        K = min(K, N-K);
        int father=0, son=0;
        for(int i=0; i<N; i++)
        {
            if(i<K)
                son += weights[i];
            else
                father += weights[i];
        }
        cout << abs(son-father) << endl;
    }
}