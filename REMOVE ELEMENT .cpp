class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count =0;
       vector<int>n;
        int k;
        for(auto x:nums){
            n.push_back(x);
        }
        nums.clear();
        for(auto j:n){
            if(j==val){
             
             count++;
                
            }
          if(count<=0){
              nums.push_back(j);
          }
          count =0;
        }
        
        return nums.size();
    }
};
