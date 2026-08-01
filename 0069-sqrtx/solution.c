int mySqrt(int x) {
   long long num = x;
   long long i;
   for(i=0;i*i<=num;i++)
    {
       if(i*i == num)
       {
           return i;
       }         
    }
    return i-1;
}
