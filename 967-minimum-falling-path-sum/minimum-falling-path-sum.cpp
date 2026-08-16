class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int left=1e9,mid=1e9,right=1e9;
                if(j>0){
                    left=matrix[i][j]+dp[i-1][j-1];
                }
                if(i>0){
                    mid=matrix[i][j]+dp[i-1][j];
                }
                if(j<m-1){
                    right=matrix[i][j]+dp[i-1][j+1];
                }
                dp[i][j]=min(left,min(right,mid));
            }
        }
        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
};