class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> set;
        vector<int> ans(2);
        int sum=0,msum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(!set.contains(grid[i][j])){
                    set.insert(grid[i][j]);
                    sum+=grid[i][j];
                }
                else{
                    ans[0]=grid[i][j];
                }
            }
        }
        for(int i=1;i<=grid.size()*grid.size();i++){
            msum+=i;
        }
        ans[1]=msum-sum;
        return ans;
    }
};