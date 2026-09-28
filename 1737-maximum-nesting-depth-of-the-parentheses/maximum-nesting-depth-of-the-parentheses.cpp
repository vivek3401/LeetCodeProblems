class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int maxi=0;
        for(char ch : s){
            if(ch=='('){
                cnt+=1;
            }
            if(ch==')'){
                cnt-=1;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};