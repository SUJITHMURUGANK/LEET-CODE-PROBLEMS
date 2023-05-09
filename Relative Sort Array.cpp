class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int count=0;  vector<int>k;  vector<int>l;
        for(auto i:arr2){
            for(auto j:arr1){
                if(i==j){
                    k.push_back(j);
                    }
            }}
         for(auto x:arr1){
             for(auto p:k){
                 if(x==p){
                     count++;
                     break;
                 }
             }
             if(count==0){
                 l.push_back(x);
             }
             count=0;
         }
         sort(l.begin(),l.end());
         for(auto n:l){
             k.push_back(n);
         }
        
      return {k};  
    }
};
