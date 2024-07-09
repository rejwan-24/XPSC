#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long 
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        for(int i=0;i<31;i++)
        {
            if((x & (1 << i)) != (y & (1 << i))) 
            {
                cout<<(1 << i)<<endl;
                break;
            }
        }
    }
    return 0;
}