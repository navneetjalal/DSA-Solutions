class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int sec=i+1,third=nums.size()-1;
            while(sec<third){
                if(nums[i]+nums[sec]+nums[third]==0){
                    ans.push_back({nums[i],nums[sec],nums[third]});
                    sec++,third--;
                    while(sec<third&&nums[sec]==nums[sec-1]){
                        sec++;
                    }
                }
                else if(nums[i]+nums[sec]+nums[third]>0){
                    third--;
                }
                else{
                    sec++;
                }
            }
        }
        return ans;
    }
};













//         }
//         for(int i=0;i<nums.size()-2;i++){
//             for(int j=i+1;j<nums.size()-1;j++){
//                 sum=nums[i]+nums[j];
//                 if(c.find(-sum))
//             }
//         }
//         return ans;
//     }
// };