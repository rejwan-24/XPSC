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
        string s;
        cin>>s;
        int cnt = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1')
            {
                cnt++;
            }
        }
        if(cnt == 1)
        {
            cout<<11<<endl;
        }
        else if(cnt == 3)
        {
            cout<<231<<endl;
        }
        else if(cnt == 4)
        {
            cout<<441<<endl;
        }
        else
        {
            if(s[0] == '1' && s[1] == '1' || s[2] == '1' && s[3] == '1')
            {
                cout<<21<<endl;
            }
            else
            {
                cout<<121<<endl;
            }
        }
    }
    return 0;
}