#include<bits/stdc++.h>
using namespace std;

bool areAllSame(vector<int> salary)
{
    int temp = salary[0];
    for(int i=1; i<salary.size(); i++)
        if(temp != salary[i])
            return false;
    return true;
}

int main()
{
    int test; cin >> test;

    while(test--)
    {
        int N; cin >> N;
        vector<int> salary;

        int temp, prev;
        bool flag=false;
        for(int i=0; i<N; i++)
        {
            cin >> temp;
            salary.push_back(temp);
            
            if(i > 0)
            {
                if(temp != prev)
                    flag = true;
            }
            else
                prev = temp;
        }
        
        if(flag)
        {
            int count=0;
            while(!areAllSame(salary))
            {
                int min_index=0, min_value=INT_MAX, max_index=0, max_value=INT_MIN;
                for(int i=0; i<N; i++)
                {
                    if(salary[i] < min_value)
                    {
                        min_index = i;
                        min_value = salary[i];
                    }
                    if(salary[i] > max_value)
                    {
                        max_index = i;
                        max_value = salary[i];
                    }
                }
                int diff = max_value-min_value;
                for(int i=0; i<N; i++)
                {
                    if(i != max_index)
                        salary[i] += diff;
                }
                count += diff;
            }
            cout << count << endl;
        }
        else
            cout << 0 << endl;
    }
}