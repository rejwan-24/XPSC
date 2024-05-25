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
        string s;
        cin>>s;
        int one = 0, zero = 0;
        for(char e : s) 
        {
            if(e=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
  
       int mn = min(one,zero);
       if(mn % 2 == 0) cout<<"Ramos"<<endl;
       else cout<<"Zlatan"<<endl;
    }
    return 0;
}
