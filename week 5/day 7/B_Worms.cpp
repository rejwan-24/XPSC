#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int n;
    cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
    {
		cin>>v[i];
		if(i != 0)
        {
			v[i]+=v[i-1];
		}
	}
	int m;cin>>m;
	while(m--)
    {
		int x;
        cin>>x;
		int val=lower_bound(v.begin(),v.end(),x)-v.begin();
		cout<<val+1<<endl;
	}
	
    return 0;
}