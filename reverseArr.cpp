// https://leetcode.com/problems/reverse-string/submissions/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int k=0,t;
        for(int i=0;i<s.size()/2;i++){
            t=s[s.size()-i-1];
            s[s.size()-i-1]=s[i];
            s[i]=t;
        }
    }
};