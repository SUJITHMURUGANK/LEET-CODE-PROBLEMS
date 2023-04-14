class Solution {
public:
    bool isPowerOfFour(int n) {
long int sum=1;
        for(long int i=1;i<=n;i++){
             sum=sum*4;
             if(sum==n){
                 return true;
             }
               if(n==1){
                 return true;
             }
             if(sum>n){
                 break;
             }
           
        }
     return false;   
    }
};
