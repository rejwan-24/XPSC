#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    multiset<int,greater<int>>ms;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }
    vector<int>v(m);
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<m;i++)
    {
        auto it = ms.lower_bound(v[i]);
        if(it == ms.end()) cout<<-1<<endl;
        else
        {
            cout<<*it<<endl;
            ms.erase(it);
        }
    }
    return 0;
}