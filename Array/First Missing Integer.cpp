void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
int seg(vector<int> &A)
{
    int j=0;
    int n=A.size();
    for(int i=0; i<n; i++)
    {
        if(A[i]<=0)
        {
            swap(A[i],A[j]);
            j++;
        }
    }
    return j;
}

int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size();
    //cout<<n<<endl;
    int shift=seg(A);
    int si=n-shift;
    //cout<<si<<endl;
    int j=shift;
    
    for(int i=j; i<n; i++)
    {   //cout<<A[i]<<" ";
        if(abs(A[i])<=si&&A[abs(A[i])+j-1]>0)
        {
            A[abs(A[i])+j-1]=-A[abs(A[i])+j-1];
        }
    }//cout<<endl;
    for(int i=j; i<n; i++)
    {   //cout<<A[i]<<" ";
        if(A[i]>0)
        {
            return i-j+1;
        }
    }
    return si+1;
}
