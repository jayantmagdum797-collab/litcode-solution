int divide(int dividend, int divisor) {
    long long a= dividend;
    long long b=divisor;
    if(a==INT_MIN&&b==-1)
   
   {
    return INT_MAX;
   } 

    int divi=a/b;
    return divi;
    
}
