bool isPerfectSquare(int num) {
     long long n= num;
   long long   temp;
  // if(num=INT_MIN&&P)
    long long i=1;
    while(i<=n)
    {
        temp=i*i;

     if(temp==n)
    {
        return true;
            

   
    }
  i++;
    }
    
        return false;
    
    
}
