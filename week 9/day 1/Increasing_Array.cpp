#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,pre=0,curr,cnt=0;
	cin>>n;
	for (int i=0;i<n;i++)
    {
		cin>>curr;
		if (curr < pre) 
        {
			cnt += pre-curr;
			curr=pre;
		}
		pre = curr;
	}
	cout<<cnt<<endl;
    
    return 0;
}