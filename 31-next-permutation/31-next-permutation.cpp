class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        while(i >=0 && nums[i+1] <= nums[i]){
            i--;
        }
        if(i>=0){
            int j=nums.size() - 1;
            while(nums[j] <= nums[i]){
                j--;
            }
            swap(nums[j],nums[i]);
        }
        reverse(nums.begin()+i+1,nums.end());
    }
};