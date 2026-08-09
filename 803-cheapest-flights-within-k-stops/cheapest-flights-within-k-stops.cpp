class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // using diskstra
        vector<vector<pair<int,int>>> adj(n);
        for(auto node : flights){
            int u=node[0];
            int v=node[1];
            int w=node[2];
            adj[u].push_back({v,w});
        }
        queue<pair<int,pair<int,int>>> q;
        vector<int> dis(n,INT_MAX);
        dis[src]=0;
        q.push({src,{0,-1}});
        while(!q.empty()){
            auto it=q.front();
            int u=it.first;
            int cost=it.second.first;
            int stops=it.second.second;
            q.pop();
            for(auto m : adj[u]){
                int w=m.second;
                int v=m.first;
                if(cost+w<dis[v] && stops+1<=k){
                    dis[v]=cost+w;
                    q.push({v,{dis[v],stops+1}});
                }
            }
            
        }
        return (dis[dst]==INT_MAX) ? -1 : dis[dst];
    }
};