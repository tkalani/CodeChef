#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli test;
    cin >> test;
    while(test--)
    {
        lli N, M, K, fence=0;
        cin >> N >> M >> K;

        vector< pair<lli, lli> > fields;
        
        for(lli i=0; i<K; i++)
        {
            lli plant_row, plant_column;
            cin >> plant_row >> plant_column;

            fields.push_back(make_pair(plant_row, plant_column));
        }

        sort(fields.begin(), fields.end());

        for(lli i=0; i<K; i++)
        {
            if(!binary_search(fields.begin(), fields.end(), make_pair(fields[i].first, fields[i].second-1)))
                fence++;
            
            if(!binary_search(fields.begin(), fields.end(), make_pair(fields[i].first, fields[i].second+1)))
                fence++;
            
            if(!binary_search(fields.begin(), fields.end(), make_pair(fields[i].first-1, fields[i].second)))
                fence++;
            
            if(!binary_search(fields.begin(), fields.end(), make_pair(fields[i].first+1, fields[i].second)))
                fence++;
        }

        cout << fence << endl;
    }
    return 0;
}
