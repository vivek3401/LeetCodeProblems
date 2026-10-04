class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> st(deadends.begin(),deadends.end());
        unordered_set<string> vis;
        
        queue<pair<string,int>> q;
        string strt="0000";
        if(st.count(strt)) return -1;
        vis.insert(strt);
        q.push({strt,0});
        while(!q.empty()){
            string word=q.front().first;
            int dis=q.front().second;
            q.pop();
            if(word==target) return dis;
            for(int i=0;i<word.size();i++){
                char ch=word[i];
                word[i]=(ch-'0'+1) %10+'0';
                if(!st.count(word) && !vis.count(word)){
                    q.push({word,dis+1});
                    vis.insert(word);
                }
                word[i]=(ch-'0'+9)%10 +'0';
                if(!st.count(word) && !vis.count(word)){
                    q.push({word,dis+1});
                    vis.insert(word);
                }
                word[i]=ch;
            }
        }
        return -1;
    }
};