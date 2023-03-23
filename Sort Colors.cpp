class Solution {
public:
    void sortColors(vector<int>& nums) {
        multiset<int>m;
        for(auto i:nums){
            m.insert(i);
        }
        nums.clear();
        for(auto x:m){
            nums.push_back(x);
        }
        
    }
};
