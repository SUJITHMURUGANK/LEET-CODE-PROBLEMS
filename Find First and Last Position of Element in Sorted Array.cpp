class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> k;
        vector<int>l;
        int s=nums.size();
        int count =0,j;
        for(int i=0;i<s;i++){
            if(nums[i]==target){
             count++;
                k.push_back(i);
                j=i;
            }
        }
          if(count==1){
           k.push_back(j);
       }
     
       if(k.size()>1){
           l.push_back(k[0]);
           l.push_back(k[k.size()-1]);
           cout<<l[0]<<l[0];
           return l;
       }
        if(count>0){
           return {k};
       }
        
        return {-1,-1};

    }
};
