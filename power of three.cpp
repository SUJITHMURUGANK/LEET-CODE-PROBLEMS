class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n==0){
            return false;
        }
          if(n==1){
                return true;
            }
      long  int sum=1;
        for(long int i=1;i<=n;i++){
            sum=sum*3;
            if(sum==n){
                return true;
            }
            if(sum>n){
                break;
            }
          
        }
     return false;   
    }
};
