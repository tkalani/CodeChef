#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        vector<char> v;
        for(char i='a';i<='z';i++){
            if(m[i]&1){
                v.push_back(i);
            }
        }
        if(v.size()==0){
            cout<<"!DPS\n";
        }
        else if(v.size()<=3){
            cout<<"DPS\n";
        }
        else cout<<"!DPS\n";
    }
    return 0;
}