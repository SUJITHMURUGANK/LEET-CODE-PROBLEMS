class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int j=0; 
    int m=*max_element(nums.begin(),nums.end());
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]==m){
                j=i;
            }         
        }
        return j;
    }
};
