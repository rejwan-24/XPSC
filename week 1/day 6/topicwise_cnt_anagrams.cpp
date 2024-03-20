// geekforgeeks
int search(string pat, string txt) 
{
     vector<int>v(26);
     vector<int>v1(26);
     
     for(auto it:pat) 
     {
        v[it-'a']++;
     }
 
    int ans = 0;
    int k = pat.size();
    int l = 0, r = 0;
    int n = txt.size();
    
    while (r < n) 
    {
        v1[txt[r]-'a']++;
        if (r - l + 1 == k) 
        {
            if(v==v1) ans++;
            v1[txt[l]-'a']--;
            l++;
            r++;
        }
        
        else
        {
            r++;
        }
    }
 
    return ans;
}