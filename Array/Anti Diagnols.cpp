vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size();
    vector<vector<int> >ans(2*n-1);
    int k=0;
    int col,row;
    for(int i=0; i<n; i++)
    {
        col=i;
        row=0;
        while(col>=0)
        {
            ans[k].push_back(A[row][col]);
            col--;
            row++;
        }
        k++;
    }
    for(int i=1; i<n; i++)
    {
        col=n-1;
        row=i;
        while(row<n)
        {
            ans[k].push_back(A[row][col]);
            col--;
            row++;
        }
        k++;
    }
    return ans;
}
