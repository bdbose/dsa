// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size(),t=0,indx=0;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int indx=abs(nums[i])-1;
            if(nums[indx]>0){
                nums[indx]=-nums[indx];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                arr.push_back(i+1);
            }
        }
        return arr;
    }
};