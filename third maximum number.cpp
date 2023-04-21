class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> i;
        int k=nums.size();
        for(int j=0;j<k;j++){
            i.insert(nums[j]);
        }
        auto it1=i.end();
        if(i.size()<3){
            it1--;
          return *it1;
        }
        else{
            it1--;
            it1--;
            it1--;
        }
       

    return *it1; 
    }
};
