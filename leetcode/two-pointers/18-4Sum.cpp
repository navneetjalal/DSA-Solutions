class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
                if(i>0 && nums[i]==nums[i-1]){
                    continue;
                }
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int low=j+1,high=nums.size()-1;
                while(low<high){
                    long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[low]+(long long)nums[high];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        low++,high--;
                        while(low<high&& nums[low]==nums[low-1]){
                            low++;
                        }
                    }
                    else if(sum<target){
                        low++;
                    }
                    else{
                        high--;
                    }
                }
            }
        }
        return ans;
    }
};