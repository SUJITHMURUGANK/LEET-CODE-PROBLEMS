class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>k;
        int count=0,count1=0;
     for(int i=0;i<nums1.size();i++){
         for(int j=0;j<nums2.size();j++){
             if(nums1[i]==nums2[j]){
                 count1++;
             }
             if(count1==1){
             if(nums1[i]<nums2[j]){
                k.push_back(nums2[j]);
                count++;
                count1=0;
             }}

         }
         if(count==0){
             k.push_back(-1);
         }
         
         count=0;
         count1=0;
     } 
     return {k};  
    }
};
