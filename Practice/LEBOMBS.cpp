#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;

    while(test--)
    {
        int N; cin >> N;
        string S; cin >> S;

        int count = 0;
        vector<bool> visited;
        for(int i=0; i<N; i++)
            visited.push_back(false);

        for(int i=0; i<N; i++)
        {
            if(S[i] == '1')
            {
                count++;
                visited[i] = true;
                if(i > 0)
                {
                    if(S[i-1] == '0' && !visited[i-1])
                        count++;
                    visited[i-1] = true;
                }
                if(i < N-1)
                {
                    if(S[i+1] == '0' && !visited[i+1])
                        count++;
                    visited[i+1] = true;
                }
            }
        }
        cout << N-count << endl;
    }
}