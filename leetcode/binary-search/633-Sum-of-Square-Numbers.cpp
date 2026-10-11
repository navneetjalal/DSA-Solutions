class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low=0,high=(int)pow(c,0.5);
        // while(low<=high){
        //     int mid=low+(high-low)/2;
        //     if(high*high + low*low == c || high*high+mid*mid==c || mid*mid+low*low==c||2*(mid*mid)==c){
        //         return true;
        //     }
        //     if(mid*mid + low*low>c){
        //         high=mid-1;
        //     }
        //     else{
        //         low=mid+1;
        //     }
        // }
        while(low<=high){
            if(low*low+high*high==c){
                return true;
            }
            else if(low*low+high*high>c){
                high--;
            }
            else{
                low++;
            }
        }
        return false;
    }
};