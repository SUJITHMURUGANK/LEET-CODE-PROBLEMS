class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(auto i:nums){
            return i;
            break;
        }
     return 0;   
    }
};
