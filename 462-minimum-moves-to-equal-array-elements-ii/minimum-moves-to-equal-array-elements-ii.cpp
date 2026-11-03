class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        nth_element(nums.begin(),nums.begin()+n/2,nums.end());
        int cnt=0;
        int val=nums[n/2];
        for(int i=0;i<n;i++){
            cnt+=abs(val-nums[i]);
        }
        return cnt;
    }
};