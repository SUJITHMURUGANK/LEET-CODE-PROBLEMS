class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>k;
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto x:m){
            if(x.second==1){
                k.push_back(x.first);
            }
        }
        return {k};
    }
};
