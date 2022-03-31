// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),c=0;
        for(int i=0;i<n;i++){
            if(i<n-1 && nums[i]==nums[i+1]){
                continue;
            }
            nums[c]=nums[i];
            c++;
        }
        return c;
    }
};