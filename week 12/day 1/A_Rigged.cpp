#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long 
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> s(n),e(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i]>>e[i];
        }
 
       bool flag = true;
        for(int i=1;i<n;i++)
        {
            if(s[i] >= s[0] && e[i] >= e[0])
            {
                flag = false;
                break;
                //cout<<-1<<endl;
                //return 0;
            }
        }
        //cout<<s[0]<<endl;
        if(flag)
        {
           cout<<s[0]<< endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}