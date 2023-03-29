class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto x:m){
            if(x.second==1){
                return x.first;
            }
        }
      return 0;  
    }
};
