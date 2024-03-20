

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        vector<long long int> ans;
        list<long long> li;
        int l = 0, r = 0;
        
        while (r < N) 
        {
            if (A[r] < 0)
            {
                li.push_back(A[r]);
            }
            if((r - l +1) == K )
            {
                if(li.size() == 0)
                {
                    ans.push_back(0);
                }
                
                else
                {
                    ans.push_back(li.front());
                    if(A[l] == li.front())
                    {
                        li.pop_front();
                    }
                }
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