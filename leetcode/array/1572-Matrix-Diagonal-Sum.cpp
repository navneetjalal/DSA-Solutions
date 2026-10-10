class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int dsum=0;
        for(int i=0;i<mat.size();i++){
            dsum+=mat[i][i];
            if(i!=mat.size()-1-i){
                dsum+=mat[i][mat.size()-1-i];
            }
        }
        return dsum;
    }
};