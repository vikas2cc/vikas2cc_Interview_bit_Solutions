vector<vector<int> > Solution::threeSum(vector<int> &A) {
    
    int n=A.size();
    vector<vector<int>>v(0);
    sort(A.begin(),A.end());
    int i=0;
    vector<int>t;
    while(i<n-2)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            int cursum=A[i]+A[l]+A[r];
            if(cursum==0)
            {
                t.push_back(A[i]);
                t.push_back(A[l]);
                t.push_back(A[r]);
                v.push_back(t);
                t.clear();
                while(A[l]==A[l+1])
                {
                    l++;
                    if(l==n)break;
                }
            }
            if(cursum<0)
            {
                while(A[l]==A[l+1])
                {
                    l++;
                    if(l==n)break;
                }l++;
            }
            else
            {
                while(A[r]==A[r-1])
                {
                    r--;
                    if(r==l)break;
                }r--;
            }
        }
        while(A[i]==A[i+1])
        {
            i++;
            if(i==n-1)return v;
        }
        i++;
    }
    return v;
}
