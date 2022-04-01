class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int m=0;
        if (nums.size()==0)
            return;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[m]=nums[i];
                m++;
            }
        }
        for(int i=m;i<nums.size();i++){
            nums[i]=0;
        }
    }
};