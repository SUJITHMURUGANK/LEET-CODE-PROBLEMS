class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>num1;
        set<int>num2;
        vector<int>v;
        for(int l=0;l<nums1.size();l++){
            for(int k=0;k<nums2.size();k++){
                if(nums1[l]==nums2[k]){
                    num1.insert(nums1[l]);
                }
            }
        }
            for(auto i:num1){
           v.push_back(i);
        }
      return {v};  
    }
};
