class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k,s,max=0,j;
        s=nums.size();
        int count=0;
        for(int i=0;i<s;i++){
          
            if (nums[i]==target){
              return i;
              break;
              
            }
            if(nums[i]!=target){
              if(nums[i]>target){
                count =i;
                break;
            }
            } }
            return count;
        
            }
        };
