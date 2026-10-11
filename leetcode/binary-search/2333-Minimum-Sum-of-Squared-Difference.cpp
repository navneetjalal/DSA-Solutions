class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long ans=0;
        int k=k1+k2;

        vector<int>vec(100001,0);
        for(int i=0;i<nums1.size();i++){
            vec[abs(nums1[i]-nums2[i])]++;
        }

        for(int i=vec.size()-1;i>0;i--){
            if(vec[i]!=0&& k>0){
                int mini=min(k,vec[i]);
                vec[i]-=mini;
                vec[i-1]+=mini;
                k=k-mini;
            }
        }
        for(long i=0;i<vec.size();i++){
            ans+=i*i*vec[i];
        }
        // sort(nums1.begin(),nums1.end());
        // int a=nums1.size()-1;
        // for(int i=0;i<k1+k2;i++){
        //     if(nums1[a]>=nums1[a-1]){
        //         nums1[a]--;
        //     }
        //     else{
        //         a--;
        //         nums1[a]--;
        //     }
        // }
        // for(int i=0;i<nums1.size();i++){
        //     ans+=nums1[i]*nums1[i];
        // }
        return ans;
    }
};