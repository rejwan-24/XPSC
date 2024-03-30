#include<bits/stdc++.h>
using namespace std;
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
        string ss = "meow";

        for(int i=0;i<s.size();i++)
        {
            s[i] = tolower(s[i]);
        } 

        auto last = unique(s.begin(),s.end());
        s.erase(last,s.end());
        
        if(s == ss) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}