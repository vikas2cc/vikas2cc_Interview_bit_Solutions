int Solution::pow(int x1, int n, int d) {
    long long int x=x1;
    if(x==0)return 0;
    if(n==0)return 1;
    long long int res=1;
    int c=0;
    if(x<0)
    {
        x=abs(x);
        if(n&1)c=1;
    }
    
    x=x%d;
    
    while(n!=0)
    {
        if(n&1)
         res=(res*x)%d;
        n=n>>1;
        x=(x*x)%d;
        if(res>d)
        res=res%d;
    }
    
    if(c)
    {
        res=d-(int)res;
    }
    return (int)res;
}
