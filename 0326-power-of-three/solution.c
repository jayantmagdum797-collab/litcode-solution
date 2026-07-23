bool isPowerOfThree(int n) {
    
    
    long long num=n;
      if(num==0)
        {
            return false;

        }
        while(num%3==0)
        {
           num= num/3;
        }
        if(num==1)
            {
                return true;
            }
            else{
                return false;
            }
        }
    

