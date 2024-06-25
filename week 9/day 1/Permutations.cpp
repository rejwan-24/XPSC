#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
	cin>>n;
	if (n==1)
    {
		cout<<1<<endl;
		return 0;
	}
	if (n<4) 
    {
		cout<<"NO SOLUTION"<<endl;
		return 0;
	}
	cout<<2;
	for (int i=2;2*i<=n;i++)
    {
		cout<<" "<<2*i;
	}
	for (int i=0;2*i+1<=n;i++)
    {
		cout<<" "<<2*i+1;
	}
	cout<<endl;
    return 0;
}