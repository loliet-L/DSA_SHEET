class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int indx=-1;
        int n = nums.size();
        for ( int i =n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                indx =i;
                break;
            }
        }
        if(indx==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
        int prev =indx;
        for(int i = n-1;i>indx;i--){
            if(nums[i]>nums[indx-1]){
               prev = i;
                break;
            } 
        }
        
        
        swap(nums[indx-1],nums[prev]);
        reverse(nums.begin()+indx,nums.end());
        }
        
    }
};
