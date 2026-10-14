class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        if(sum>9*num) return "";
        while(ans.size()!=num){
            int curr=min(9,sum);
            ans+=curr+'0';
            sum-=curr;
        }
        return ans;
    }
};