class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long> sq;
        for(int x : nums){
            sq.push_back(x*x);
        }
        long long maxi=0;
        int even=0;
        sort(sq.rbegin(),sq.rend());
        if(n%2==0){
            even=n/2;
        }
        else{
            even=n/2+1;
        }
        for(int i=0;i<even;i++){
            maxi+=sq[i];
        }
        for(int i=even;i<n;i++){
            maxi-=sq[i];
        }
        return maxi;

    }
};