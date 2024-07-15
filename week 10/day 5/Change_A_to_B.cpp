#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,k;
        cin>>a>>b>>k;
        long long int cnt = 0;
        while(true)
        {
            if(b % k == 0 && b / k >= a)
            {
                cnt++;
                b /= k;
            }
            else if( b % k == 0 )
            {
                cnt = cnt + b - a;
                break;
            }
            else
            {
                cnt = cnt + b % k;
                b = b - b % k;
            }
        }
        cout<<cnt<<endl;
    }
}
