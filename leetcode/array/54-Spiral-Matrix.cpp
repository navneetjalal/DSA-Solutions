class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top=0,left=0,right=matrix[0].size()-1,down=matrix.size()-1;
        while(left<=right && top<=down){
            for(int i=top;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            for(int i=top+1;i<=down;i++){
                ans.push_back(matrix[i][right]);
            }
            if(top!=down && left!=right){
            for(int i=right-1;i>=left;i--){
                ans.push_back(matrix[down][i]);
            }
            for(int i=down-1;i>top;i--){
                ans.push_back(matrix[i][left]);
            }
            }
            left++,right--,top++;down--;
        }
        return ans;
    }
};