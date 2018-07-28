#define mod 1000000007
int Solution::nTriang(vector<int> &A) {
    int n=A.size();
    int c=0;
    sort(A.begin(),A.end());
    int i=0;
    for(int k=n-1; k>=0; k--)
    {
        int j=k-1,i=0;
        while(i<j)
        {
            long int mini=A[i]+A[j],maxi=A[k];
            if(mini>maxi)
            {
                c=(c%mod+(j-i)%mod)%mod;
                j--;
            }
            else i++;
        }
    }
    return c;
}
