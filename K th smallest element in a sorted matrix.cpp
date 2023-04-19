class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>l;
        int m= matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                l.push_back(matrix[i][j]);
            }
        }
        sort(l.begin(),l.end());
        if(l.size()>=k){
            return l[k-1];
        }
     
        return{} ;
        
    }
};
