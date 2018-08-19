vector<vector<int> > Solution::solve(int n) {
    vector<vector<int> >ans(n);
    if(n==0)
    {
     return ans;   
    }
    ans[0].push_back(1);
    for(int i=1; i<n; i++)
    {
        int s=ans[i-1].size();
        ans[i].push_back(1);
        if(s==1)
        {
            ans[i].push_back(1);
        }
        else
        {
        for(int j=1; j<s; j++)
        {   
            ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
        }
        ans[i].push_back(1);
        }
    }
    return ans;
}
