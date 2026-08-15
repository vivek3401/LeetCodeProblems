class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        string ans="";
        for(char ch : s){
            mp[ch]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        while(pq.size()>=2){
            auto [freq1,ch1]=pq.top();
            pq.pop();
            auto [freq2,ch2]=pq.top();
            pq.pop();
            ans+=ch1;
            ans+=ch2;
            freq1--,freq2--;
            if(freq1>0) pq.push({freq1,ch1});
            if(freq2>0) pq.push({freq2,ch2});
        }
        while(!pq.empty()){
            auto [freq, ch]=pq.top();
            if(freq>1) return "";
            ans+=ch;
            pq.pop();
        }
        return ans;
    }
};