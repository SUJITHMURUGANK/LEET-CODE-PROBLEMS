class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        vector<int>k;
        for(auto i:nums){
            m[i]++;
        }
        for(auto x:m){
            if(x.second>1){
                k.push_back(x.first);
            }
        }
      return{k};  
    }
};
