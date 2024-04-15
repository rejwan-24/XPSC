#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> v(n);
    set<string> s;
    vector<string> ans;
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        int len=v[i].length();
	    string st=v[i].substr(len-2,2);
	    if(s.find(v[i])==s.end())
	    {
	        ans.push_back(st);
	        s.insert(v[i]);
	    }
    }
    for(auto it : ans) 
    {
        cout<<it;
    }
    return 0;
}

