class Solution {
public:
    int findMin(vector<int>& nums) {
    int p=nums[0];
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<p)
        {
            p=nums[i];
        }
    }
    return p;   
    }
};
