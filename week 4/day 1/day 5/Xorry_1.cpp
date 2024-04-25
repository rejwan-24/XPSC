#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int ans = (1<<__lg(x));
        cout<<x-ans<<" " <<ans<<endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
    {
	    int x;
	    cin>>x;   
	    cout<<(x^__bit_floor(x))<<" "<<__bit_floor(x)<<endl;
        //__bit_floor() -> finds the largest integral power of two not greater than the given value 
	}
}

*/

