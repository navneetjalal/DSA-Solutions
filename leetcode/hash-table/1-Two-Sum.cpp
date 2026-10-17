class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mapp;
        for(int i=0;i<nums.size();i++){
            mapp.insert({nums[i],i});
        }
        for(int i=0;i<n;i++){
            if(mapp.find(target-nums[i])!=mapp.end() && mapp.find(target-nums[i])->second!=i){
                return {i,mapp.find(target-nums[i])->second};
            }
        }
        return{-1,-1};
    }
};