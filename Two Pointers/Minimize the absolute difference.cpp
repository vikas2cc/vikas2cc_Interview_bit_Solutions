int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int p=0,q=0,r=0;
    int a=A.size(),b=B.size(),c=C.size();
    int diff=INT_MAX;
    while(p<a&&q<b&&r<c)
    {
        int mini=min(A[p],min(B[q],C[r]));
        int maxi=max(A[p],max(B[q],C[r]));
        if(abs(maxi-mini)<diff)
         diff=abs(maxi-mini);
        if(mini==A[p])p++;
        else if(mini==B[q])q++;
        else r++;
    }
    return diff;
}
