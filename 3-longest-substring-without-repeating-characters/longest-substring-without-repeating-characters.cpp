class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,maxi=-1e9;
        unordered_set<char> st;
        for(int i=0;i<s.size();i++){
            while(st.count(s[i])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            maxi=max(maxi,i-left+1);
        }
        return maxi==-1e9 ? 0 : maxi;
    }
};