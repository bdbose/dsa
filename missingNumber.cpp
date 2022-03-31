// https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),sum=0;
        int exp=((n+1)*n)/2;
        for (int i=0;i<n;i++)
            sum=sum+nums[i];
        return exp-sum;
    }
};