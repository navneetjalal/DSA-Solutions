int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int cmax=0;
        vector<int> pgcd(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            cmax=max(cmax,nums[i]);
            pgcd[i]=gcd(nums[i],cmax);
        }
        sort(pgcd.begin(),pgcd.end());
        int low=0,end=nums.size()-1;
        long long ans=0;
        while(low<end){
            ans+=gcd(pgcd[low],pgcd[end]);
            low++;
            end--;
        }
        return ans;
    }
};