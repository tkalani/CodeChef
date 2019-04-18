#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;
    while(test--)
    {
        int X, Y, K, N;
        cin >> X >> Y >> K >> N;

        int rem_pages = X-Y;
        vector<pair<int, int> > notebooks;

        for(int i=0; i<N; i++)
        {
            int n1, n2; cin >> n1 >> n2;
            notebooks.push_back(make_pair(n1, n2));
        }

        bool flag=false;
        for(int i=0; i<N; i++)
        {
            if(notebooks[i].first >= rem_pages && notebooks[i].second <= K)
            {
                flag = true;
                break;
            }
        }
        if(flag)
            cout << "LuckyChef" << endl;
        else
            cout << "UnluckyChef" << endl;
    }
}