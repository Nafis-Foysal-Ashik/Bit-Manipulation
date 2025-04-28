#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> singleNumber(vector<int>& nums) {
            map<int,int>mp;
            vector<int> ans;
            for(auto it : nums)
            {
                mp[it]++;
            }
            for(auto it : mp)
            {
                if(it.second==1)
                {
                    ans.push_back(it.first);
                }
            }
            return ans;
        }
    };

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>v[i];
    }
    Solution sol;
    vector<int>res = sol.singleNumber(v);
    for(int i=0 ; i<res.size() ; i++)
    {
        cout<<res[i]<<" ";
    }
}