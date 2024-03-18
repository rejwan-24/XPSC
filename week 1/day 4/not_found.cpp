#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    char ans=0;

    for(char l='a';l<='z';l++)
    {
        if(s.find(l) == -1)
        {
            ans = l;
            break;
        }
    }

    if(ans != 0)
    {
        cout<<ans;
    }
    
    else
    {
        cout<<"None";
    }
    return 0;
}