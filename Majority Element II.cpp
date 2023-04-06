class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>l; int n=nums.size(); int k=n/3;
        map<int,int>m;
    for(auto i:nums){
        m[i]++;
    }
    nums.clear();
    for(auto x:m){
        if(x.second>k){
            l.push_back(x.first);
        }
    }
     return {l};
    }
};
