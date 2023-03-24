class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        nums.clear();
        for(auto x:m){
            if(x.second>=2){
               nums.push_back(x.first);
                nums.push_back(x.first);
                }
            if(x.second<2){
                nums.push_back(x.first);
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size();      
    }
};
