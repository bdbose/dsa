// https://leetcode.com/problems/intersection-of-two-arrays/submissions/

class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        map<int,bool> mp;
        vector<int> arr;
        for(int i=0;i<a.size();i++){
            mp[a[i]]=true;
        }
        for(int i=0;i<b.size();i++){
            if(mp[b[i]]==true && count(arr.begin(), arr.end(), b[i])==0)
                arr.push_back(b[i]);
        }
        return arr;
    }
};