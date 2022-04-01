// https://leetcode.com/problems/island-perimeter/submissions/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++){
            for (int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    c=c+4;
                    if(i!=grid.size()-1 && grid[i+1][j]==1){
                        c--;
                    }
                    if(i!=0 && grid[i-1][j]==1){
                        c--;
                    }
                    if(j!=grid[i].size()-1 && grid[i][j+1]==1){
                        c--;
                    }
                    if(j!=0 && grid[i][j-1]==1){
                        c--;
                    }
                }
            }
        }
        return c;
    }
};