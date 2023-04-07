class Solution {
public:
    bool isPowerOfTwo(int n) {
       long int j=1,k=0;
        for(long int i=1;i<=n;i++){
         
           j=j*2;
           if(n==1){
             return true;
           }
           
           if(j==n){
               return true;
           }
           if(j>n)
           break;
         
        
        }
      return false;  
    }
};
