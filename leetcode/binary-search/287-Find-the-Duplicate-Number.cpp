class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            if(set.contains(nums[i])){
                return nums[i];
            }
            set.insert(nums[i]);
        }
        return -1;
    }
};

//         int slow=0,fast=0;
//         while(true){
//             slow++;
//             if(slow>=nums.size())
//                 slow=slow%nums.size();
//             fast+=2;
//             if(fast>=nums.size())
//                 fast=fast%nums.size();
//             if(nums[slow]==nums[fast]&& slow!=fast){
//                 return nums[fast];
//             }
//         }
//         return 0;
//     }
// };