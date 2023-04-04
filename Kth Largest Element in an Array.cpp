class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int m=0;
        sort(nums.begin(),nums.end());
        m=nums.size()-k;
      return nums[m];  
    }
};
