class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorr=0;
        int z=0;
        int n=nums.size();
        for(int x: nums){
            if(x!=0) z=x;
            xorr^=x;
        }
        if(xorr!=0) return n;
        else if(z!=0) return n-1;
        return 0;
    }
};