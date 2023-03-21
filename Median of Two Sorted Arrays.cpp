class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int j=0;
      for(auto i:nums2){
          nums1.push_back(i);
      }
      sort(nums1.begin(),nums1.end());
      float f=0;
      if(nums1.size()%2!=0){
          j=nums1.size()/2;
          f=nums1[j];
      }
      else if(nums1.size()%2==0){
          j=nums1.size()/2;
          f=(nums1[j]+nums1[j-1])/2.0;
      }
      return f;  
    }
};
