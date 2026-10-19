class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1001,0);
        int pass=0;
        for(auto node : trips){
            int num=node[0];
            int strt=node[1];
            int end=node[2];
            diff[strt]+=num;
            diff[end]-=num;
        }
        for(int i=0;i<1001;i++){
            pass+=diff[i];
            if(pass>capacity) return false;
        }
        return true;
    }
};