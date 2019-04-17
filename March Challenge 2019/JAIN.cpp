#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n, prev_index = 0, full_string = 0;
        cin >> n;
        int a[n], e[n], i[n], o[n], u[n], count = 0;
        for(int index=0; index<n; index++)
        {
            a[index] = 0;
            e[index] = 0;
            i[index] = 0;
            o[index] = 0;
            u[index] = 0;
        }
        for(int index=0; index<n; index++)
        {
            string temp;
            cin >> temp;
            int a_count=0, e_count=0, i_count=0, o_count=0, u_count=0;
            for(int j=0; j<temp.length(); j++)
                if(temp.at(j) == 'a')
                    a_count++;
                else if(temp.at(j) == 'e')
                    e_count++;
                else if(temp.at(j) == 'i')
                    i_count++;
                else if(temp.at(j) == 'o')
                    o_count++;
                else if(temp.at(j) == 'u')
                    u_count++;

            if(a_count && e_count && i_count && o_count && u_count)
            {
                count += n-full_string-1;
                full_string++;
            }
            else
            {
                a[prev_index] = a_count;
                e[prev_index] = e_count;
                i[prev_index] = i_count;
                o[prev_index] = o_count;
                u[prev_index] = u_count;
                prev_index++;
            }
        }
        for(int index=0; index<prev_index-1; index++)
            for(int j=index+1; j<prev_index; j++)
                if((a[index]+a[j]) && (e[index]+e[j]) && (i[index]+i[j]) && (o[index]+o[j]) && (u[index]+u[j]))
                    count++;
        cout << count << endl;
    }
}