class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        vector<int>a;
      
       int count=0,count1=0;
        for(auto i:arr){
            m[i]++;
        }
        for(auto x:m){
           a.push_back(x.second);      
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size()-1;i++){
           if(a[i]==a[i+1]){
               return 0;
           }
    }
    return 1;
    }
};
