class Solution {
public:
    int search(vector<int>& nums, int target) {
        int count=0;
        for(auto i:nums){
            count++;
            if(i==target){
                return count-1;
                break;
            }
        }
        return -1;
        
    }
};
