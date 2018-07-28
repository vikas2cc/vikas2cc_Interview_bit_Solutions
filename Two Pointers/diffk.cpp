int Solution::diffPossible(vector<int> &A, int k) {
    int n=A.size();
    if(n==1||n==0)return 0;
    int l=0,r=n-1,mid;
    for(int i=0; i<n; i++)
    {
        int Ai=A[i];
        l=i+1;
        r=n-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(A[mid]==A[i]+k)
             return 1;
            else if(A[mid]>A[i]+k)
             r=mid-1;
            else 
             l=mid+1;
        }
    }
    return 0;
}
