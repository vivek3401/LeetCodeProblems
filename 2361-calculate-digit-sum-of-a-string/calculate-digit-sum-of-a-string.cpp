class Solution {
public:
    string solve(string s,int n,int k){
        string ans="";
        for(int i=0;i<n;i+=k){
            int sum=0;
            for(int j=i;j<min(n,i+k);j++){
                sum+=s[j]-'0';
            }
            ans+=to_string(sum);
        }
        return ans;
    }
    string digitSum(string s, int k) {
        int n=s.size();
        string ans=s;

        while(ans.size()>k){
            ans=solve(ans,ans.size(),k);
        }
        return ans;
    }
};