class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        int count=1,ptr1=0,ptr2=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[ptr1]!=nums[ptr2]){
                ptr1++;
                nums[ptr1]=nums[ptr2];
                count++;
            }
            ptr2++;
        }
        return count;
    }
};