class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.size();
        vector<int> sf(26,0),pf(26,0);
        for(char ch : p){
            pf[ch-'a']++;
        }
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            sf[s[i]-'a']++;
            if(i>=k){
                sf[s[i-k]-'a']--;
            }
            if(pf==sf){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};