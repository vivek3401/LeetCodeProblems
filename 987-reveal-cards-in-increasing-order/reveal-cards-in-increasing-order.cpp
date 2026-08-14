class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        vector<int> nums(n,0);
        int i=0,j=0;
        bool skip=false;
        while(i<n){
            if(nums[j]==0 && !skip){
                nums[j]=deck[i];
                i++;
                j=(j+1)%n;
                skip=true;
            }else{
                if(nums[j]!=0) j=(j+1)%n;
                else{
                    j=(j+1)%n;
                    skip=false;
                    }
            }
             }
        return nums;
    }
};