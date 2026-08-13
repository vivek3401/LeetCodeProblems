class Solution {
public:
    void dfs(int src,int des,vector<vector<bool>> &vis,vector<vector<int>> &heights){
        int  n=heights.size();
        int m=heights[0].size();
        vis[src][des]=true;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr=dr[i]+src;
            int nc=dc[i]+des;
            if(nr>=0 && nc>=0 && nr<n && nc<m && heights[nr][nc]>=heights[src][des] && !vis[nr][nc]){
                dfs(nr,nc,vis,heights);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>> ans;
        vector<vector<bool>> vis1(n,vector<bool> (m,false));
         vector<vector<bool>> vis2(n,vector<bool> (m,false));
        for(int i=0;i<n;i++){
            if(!vis1[i][0]){ // first Pacific
                dfs(i,0,vis1,heights);
            }   
        }
        for(int i=0;i<m;i++){ // se
            if(!vis1[0][i]){
                dfs(0,i,vis1,heights);
            }   
        }
        for(int i=0;i<n;i++){
            if(!vis2[i][m-1]){
                dfs(i,m-1,vis2,heights);
            }   
        }
        for(int i=0;i<m;i++){
            if(!vis2[n-1][i]){
                dfs(n-1,i,vis2,heights);
            }   
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis1[i][j]==true && vis2[i][j]==true){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};