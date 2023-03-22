class Solution {
public:
    int mySqrt(int x) {
      int s;
       long int ivar,i,j;

        for(i=0;i<=x;i++){
                  
                ivar =i*i;
            
            if(ivar==x){   
                return i;
                break;
            }        
            if(ivar>x){
                    s=i-1;             
                break;
            }         
        }    
        return s;
    }
};
