// https://leetcode.com/problems/third-maximum-number/submissions/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int m1=INT_MAX,m2=INT_MAX,m3=INT_MAX;
        for(auto i:nums){
            if(m1==i || m2==i || m3==i) continue;
            if(m1==INT_MAX || m1<i){
                m3=m2;
                m2=m1;
                m1=i;
            }else if(m2==INT_MAX || m2<i){
                m3=m2;
                m2=i;
            }else if(m3==INT_MAX || m3<i){
                m3=i;
            }
        }
        return m3==INT_MAX?m1:m3;
    }
};