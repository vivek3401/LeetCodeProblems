class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        int n=deck.size();
        sort(deck.begin(),deck.end());
        for(int i=0;i<n;i++){
            q.push(i);
        }
        int i=0;
        vector<int>nums(n,0);
        while(!q.empty()){
            int idx=q.front();
            q.pop();
            int v=q.front();
            q.pop();
            q.push(v);
            nums[idx]=deck[i];
            i++;
        }
        return nums;
    }
};