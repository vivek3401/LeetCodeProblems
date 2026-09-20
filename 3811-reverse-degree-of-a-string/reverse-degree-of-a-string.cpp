class Solution {
public:
    int reverseDegree(string s) {
        int total=0;
        for(int i=0;i<s.size();i++){
            int val=26-(s[i]-'a');
            total+=val*(i+1);
        }
        return total;
    }
};