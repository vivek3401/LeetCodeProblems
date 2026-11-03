class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=0;
        int val=nums[n/2];
        for(int i=0;i<n;i++){
            cnt+=abs(val-nums[i]);
        }
        return cnt;
    }
};