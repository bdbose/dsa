// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mP=INT_MIN;
        for(int i=0;i<a.size()-1;i++){
            for(int j=i+1;j<a.size();j++){
                if(a[j]-a[i]>mP){
                    mP=a[j]-a[i];
                }
            }
        }
        return mP<0?0:mP;
    }
};