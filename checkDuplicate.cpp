// https://leetcode.com/problems/contains-duplicate/submissions/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=true;
        }
        return mp.size()!=nums.size();
    }
};