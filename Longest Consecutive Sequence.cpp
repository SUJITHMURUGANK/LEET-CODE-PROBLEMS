class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
          if(nums.size()==0){
           return 0;
       }
       else if(nums.size()==1)
       {
            return 1;
       }
        set<int>k;
        vector<int>l;
        for(auto j:nums){
            k.insert(j);
        }
        for(auto x:k){
            l.push_back(x);
        }
        sort(l.begin(),l.end());
       long int count=0,max=0;
     
        for(long int i=0;i<l.size()-1;i++){
           if(abs(l[i]-l[i+1])==1){
               count++;
               if(count>max){
                   max=count;
               }
              }
             else
           {
              count=0;
           }
        }
        return max+1;
    }
};
