// https://leetcode.com/problems/merge-sorted-array/submissions/

class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int l=m+n-1;
        int j=n-1;
        int i=m-1;
        while(l>=0){
            if(j<0 || (i>=0 && num1[i]>num2[j]))
                num1[l--]=num1[i--];
            else
                num1[l--]=num2[j--];
        }
        
    }
};