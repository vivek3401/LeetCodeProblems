class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                unordered_set<int> st;
                for(int k=i;k<=j;k++){
                    st.insert(nums[k]);
                }
                int n=st.size();
                total+=n*n;
            }
            
        }
        return total;
    }
};