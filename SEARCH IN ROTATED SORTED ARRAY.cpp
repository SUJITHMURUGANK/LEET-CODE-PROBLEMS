class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s= nums.size();
        for(int i=0;i<s;i++){
            if(nums[i]==target){
                return i;
                break;
            }
            if(i==s-1){
                break;
            }
        }
        return -1;
        
    }
};
