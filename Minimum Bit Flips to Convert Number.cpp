#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
        int minBitFlips(int start, int goal) {
            int count=0;
            int ans = start xor goal;
            for(int i=0 ; i<32 ; i++)
            {
                if(ans & 1<<i)
                {
                    count++;
                }
            }
            return count;
        }
    };


int main()
{
    int start,goal;
    cin>>start>>goal;
    Solution sol;
    int res = sol.minBitFlips(start,goal);
    cout<<res<<endl;
}