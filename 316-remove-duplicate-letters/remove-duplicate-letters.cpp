class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        vector<bool> vis(26,false);
        vector<int> freq(26,0);
        stack<char> st;
        for(char ch : s) freq[ch-'a']++;
        for(char ch : s){
            freq[ch-'a']--;
            if(vis[ch-'a']) continue;
            while(!st.empty() && st.top()>ch && freq[st.top()-'a']>0){
                char c=st.top();
                st.pop();
                vis[c-'a']=false;
            }
            st.push(ch);
            vis[ch-'a']=true;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};