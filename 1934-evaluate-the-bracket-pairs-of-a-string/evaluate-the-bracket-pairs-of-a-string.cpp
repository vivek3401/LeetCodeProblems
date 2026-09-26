class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        unordered_map<string,string> mp;
        for(int i=0;i<k.size();i++){
            mp[k[i][0]]=k[i][1];
        }
        string ans="";
        int i=0;
        while(i<s.size()){
            if(s[i]=='('){
                string word="";
                i++;
                while(i<s.size() && s[i]!=')'){
                    word+=s[i];
                    i++;
                }
                if(mp.find(word)!=mp.end()){
                    ans+=mp[word];
                }
                else{
                    ans+='?';
                }
            }else{
                ans+=s[i];
            }
            i++;
            
        }
        return ans;
    }
};