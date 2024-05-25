#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int mn = INT_MAX;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    {
            cin>>v[i];
        }
	    for(int i=1;i<n-1;i++)
	    {
	        mn = min(mn,max(abs(v[i] - v[i-1]),abs(v[i] - v[i+1])));
	    }
	    mn = min(mn, abs(v[1] - v[0]));
	    mn = min(mn, abs(v[n-1] - v[n-2]));
	    cout<<mn<<endl;
	}
    return 0;
}