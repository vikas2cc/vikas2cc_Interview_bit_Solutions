int Solution::threeSumClosest(vector<int> &A, int B) {
    int n=A.size();
    if(n<3)return 0;
    sort(A.begin(),A.end());
    int l=0,r=2,sum,diff=INT_MAX,lsum,curdiff;
    int i=0;
    while(i<n-2)
    {
        l=i+1;
        r=n-1;
        while(l<r)
        {
            sum=A[i]+A[l]+A[r];
            curdiff=abs(sum-B);
            if(curdiff==0)return B;
            if(curdiff<diff)
            {
                diff=curdiff;
                lsum=sum;
            }
            if(sum>B)r--;
            else l++;
        }
        i++;
    }
    return lsum;
}
