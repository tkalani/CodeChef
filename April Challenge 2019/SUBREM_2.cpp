#include<bits/stdc++.h>
using namespace std;
#define lli long long int

struct Node
{
    lli data;
    vector<Node *> child;
};

Node* newNode(lli data)
{
    Node* new_node = new Node();
    new_node->data = data;
    return new_node;
}

lli calcSum(pair<Node *, lli> &root)
{
    root.second = root.first->data;

    for(lli i=0; i<root.first->child.size(); i++)
    {
        root.second += calcSum(make_pair(root.first->child[i], root.second));
    }
    return root.second;
}

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        lli N, X, sum=0;
        cin >> N >> X;

        vector< pair<Node *, lli> > tree;
        vector< pair<lli, lli> > conn;

        for(lli i=0; i<N; i++)
        {
            lli temp; cin >> temp;
            tree.push_back(make_pair(newNode(temp), sum));
        }

        for(lli i=0; i<N-1; i++)
        {
            lli n1, n2; cin >> n1 >> n2;
            
            if(n1 > n2)
            {
                int temp = n1;
                n1 = n2;
                n2 = temp;
            }
            conn.push_back(make_pair(n1-1, n2-1));
        }

        sort(conn.begin(), conn.end());

        for(lli i=0; i<N-1; i++)
        {
            tree[conn[i].first].first->child.push_back(tree[conn[i].second].first);
        }

        calcSum(tree[0]);

        for(lli i=0; i<tree.size(); i++)
        {
            cout << tree[i].first->data << " ";
            for(lli j=0; j<tree[i].first->child.size(); j++)
            {
                cout << tree[i].first->child[j]->data << " ";
            }
            cout << endl;
        }

        // for(lli i=0; i<N; i++)
        //     cout << tree[i].second << endl;
    }
    return 0;
}