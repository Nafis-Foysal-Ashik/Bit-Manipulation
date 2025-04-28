#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int ones=0,twos=0;
            for(int i=0 ; i<nums.size() ; i++)
            {
                ones = (nums[i] ^ ones) & ~twos;
                twos = (nums[i] ^ twos) & ~ones;
            }
            return ones;
        }
    };

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ; i<n; i++)
    {
        cin>>v[i];
    }
    Solution sol;
    int res = sol.singleNumber(v);
    cout<<res<<endl;
}