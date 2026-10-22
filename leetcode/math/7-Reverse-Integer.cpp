class Solution {
public:
    int reverse(int x) {
        long long a=0;
        while(x!=0){
            if((a*10)>=INT_MAX||(a*10)<=INT_MIN){
                return 0;
            }
            a=(a*10);
            a+=x%10;
            x=x/10;
            
        }
        
        return a;
    }
};