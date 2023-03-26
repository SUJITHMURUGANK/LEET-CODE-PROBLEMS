class Solution {
public:
     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int j=0;
      int k=m+n;
      
      
      for(int i=0;i<k;i++){
        
      if(i>m-1){
             nums1[i]=nums2[j];
            j++;
      }}
      sort(nums1.begin(),nums1.end());
}
};
