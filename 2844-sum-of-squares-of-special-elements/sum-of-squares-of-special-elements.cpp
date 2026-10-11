class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            int val=i+1;
            if(n%val==0) total+=nums[i]*nums[i];
        }
        return total;
    }
};