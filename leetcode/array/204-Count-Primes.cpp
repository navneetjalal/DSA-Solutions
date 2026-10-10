class Solution {
public:
    int countPrimes(int n) {
        vector<bool> val(n,true);
        int ans=0;
        if(n==1||n==0)
            return 0;
        for(int i=2;i<n;i++){
            if(val[i]){
                ans++;
                for(int j=i*2;j<n;j=j+i){
                    val[j]=false;
                }
            }
        }
        return ans;
    }
};