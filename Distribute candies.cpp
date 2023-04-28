class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
         int n=candyType.size();
        map<int,int>m;
            for(auto i:candyType){
                m[i]++;
            }
            for(auto x:m){
                if(x.second==n){
                    return m.size();
                    break;
                }
            }
           

       if(m.size()<=n/2){
           return m.size();
       } 
      
       
      

     return n/2;   
    }
};
