#include<bits/stdc++.h>
using namespace std;

class Solution {

    public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subset = 1 << n;
        vector<vector<int>> ans;
        for(int num=0 ; num<subset ; num++)
        {
            vector<int> list;
            for(int i=0 ; i<n ; i++)
            {
                if(num & 1<<i)
                {
                    list.push_back(nums[i]);
                }
            }
            ans.push_back(list);
        }
        return ans;
    }
};


int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i+=1)
    {
        cin>>v[i];
    }
    Solution sol;
    vector<vector<int>> res = sol.subsets(v);
    for(int i=0 ; i<res.size() ; i++)
    {
        for(int j=0 ; j<res[i].size() ; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}