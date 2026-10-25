class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,high=arr.size()-1,mid;
        while(low<=high){
            mid=low + (high-low)/2;
            if(arr[low]<arr[high]||arr[low]<arr[mid])
            {
            if(arr[mid+1]>arr[mid])
                low=mid+1;
            else{
                high=mid-1;
                if(arr[high]<arr[mid])
                return mid;
            }
            }
            else{
                high=mid-1;
            }
        }
        return mid;
    }
};