#include<bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
    int N, K, count=0;
    cin >> N >> K;

    vector<bool> link;
    for(int i=0; i<N; i++)
        link.push_back(false);
    
    for(int i=0; i<K; i++)
    {
        string S; cin >> S;
        
        if(S == "CLICK")
        {
            int link_index; cin >> link_index;
            if(!link[link_index-1])   
            {
                link[link_index-1] = true;
                count++;
            }
            else if(link[link_index-1])   
            {
                link[link_index-1] = false;
                count--;
            }
        }
        else if(S == "CLOSEALL")
        {
            for(int i=0; i<N; i++)
                link[i] = false;
            count = 0;
        }
        cout << count << endl;
    }
}