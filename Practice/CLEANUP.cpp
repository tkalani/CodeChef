#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;
    while(test--)
    {
        int N, M;
        cin >> N >> M;

        vector<bool> jobs;
        vector<int> chef_jobs; vector<int> ass_jobs;

        for(int i=0; i<N; i++)
            jobs.push_back(false);

        for(int i=0; i<M; i++)
        {
            int temp; cin >> temp;
            jobs[temp-1] = true;
        }

        string turn = "CHEF";

        for(int i=0; i<N; i++)
        {
            if(turn == "CHEF" && !jobs[i])
            {
                chef_jobs.push_back(i);
                turn = "ASSISTANT";
            }
            else if(turn=="ASSISTANT" && !jobs[i])
            {
                ass_jobs.push_back(i);
                turn = "CHEF";
            }
        }

        if(chef_jobs.size() > 0)
            for(int i=0; i<chef_jobs.size(); i++)
                cout << chef_jobs[i]+1 << " ";
        cout << endl;

        if(ass_jobs.size() > 0)
            for(int i=0; i<ass_jobs.size(); i++)
                cout << ass_jobs[i]+1 << " ";
        cout << endl;

        // for(int i=0; i<N; i++)
        //     cout << jobs[i] << endl;
    }
}