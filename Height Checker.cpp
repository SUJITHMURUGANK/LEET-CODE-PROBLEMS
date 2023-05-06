class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>a;
        int count =0;
        for(auto i:heights){
            a.push_back(i);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<heights.size();i++){
                if(heights[i]!=a[i]){
                    count++;
                    
                }
            
        }
                
        
       return count; 
    }
};
