class Solution {
public:
    long long countCommas(long long n) {
        long long cnt=0;
        long long start=1000;
        long long commas=1;
        while(start<=n){
            long long end=start*1000-1;
            if(end>n){
                end=n;
            }
            cnt+=(end-start+1)*commas;
            start=start*1000;
            commas++;
        }
        return cnt;
    }
};