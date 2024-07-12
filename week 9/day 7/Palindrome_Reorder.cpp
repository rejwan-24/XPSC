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
    
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(char c: s)
    {
        mp[c]++;
    }
    int cnt = 0;
    char ch;
    for(auto x: mp)
    {
  	    if(x.second % 2)
  	    {
  	    	ch = x.first;
  	    	cnt++;
  	    }
    }
    if((s.size() % 2 == 0 and cnt > 0) || cnt > 1)
  	cout<<"NO SOLUTION";
    else
    {
  	    string ans;
  	    for(auto x: mp)
  	    {
  	    	for(int i=1;i<=x.second/2;i++)
  	    	{	
                ans += x.first;
            }
  	    }
  	    cout<<ans;
  	    if(s.size() % 2)
  		{
            cout<<ch;
        }
  	    reverse(ans.begin(),ans.end());
  	    cout<<ans;
    }
    return 0;
}