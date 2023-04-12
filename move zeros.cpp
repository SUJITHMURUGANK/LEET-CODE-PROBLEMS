class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
  for(auto it1=nums.begin();it1!=nums.end();it1++){
      if(*it1==0){
          nums.erase(it1);
          count++;
          it1--;
      }
  }
  for(int i=1;i<=count;i++){
      nums.push_back(0);
  }  
        
    }
};
