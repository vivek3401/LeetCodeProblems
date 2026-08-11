class Solution {
public:
    string solve(int n){
        if(n==1) return "1";
        string s=solve(n-1);
        string ans="";
        int i=0,j=0;
    
        while(j<s.size()){
            while(j<s.size() && s[j]==s[i]) j++;
            int cnt=j-i;
            ans+=to_string(cnt)+s[i];
            i=j;
        }
        return ans;
    }
    string countAndSay(int n) {
        return solve(n);
    }
};