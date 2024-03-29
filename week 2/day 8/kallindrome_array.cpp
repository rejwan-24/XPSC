#include<bits/stdc++.h>
using namespace std;
bool is_pallindrome(vector<int> &v)
{
    int l = 0, r = v.size()-1;
    bool flag3 = true;
    while(l < r)
    {
        if(v[l] != v[r])
        {
            flag3 = false;
            break;
        }
        l++;
        r--;
    }
    return flag3;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int i=0,j=n-1;
        bool flag = true;
        int a,b;
        while(i < j)
        {
            if(v[i] != v[j])
            {
                flag = false;
                a = v[i];
                b = v[j];
                break;
            }
            i++;
            j--;
        }
        if(flag) cout<<"YES"<<endl;
        else
        {
            vector<int> v1,v2;
            for(int i=0;i<n;i++)
            {
                if(v[i] == a) 
                {
                    continue;
                }
                v1.push_back(v[i]);
            }
            for(int i=0;i<n;i++)
            {
                if(v[i] == b) 
                {
                    continue;
                }
                v2.push_back(v[i]);
            }
            bool flag1 = is_pallindrome(v1);
            bool flag2 = is_pallindrome(v2);
            if(flag1 || flag2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
    return 0;
}