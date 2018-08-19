vector<int> Solution::flip(string s) {
    int n=s.length();
    int a[n];
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1') a[i]=-1;
        else a[i]=1;
    }
    int max_so_far=INT_MIN,max_ending_here=0;
    int start=0,end=0,si=0;
    for(int i=0; i<n; i++)
    {
        max_ending_here+=a[i];
        if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
            start=si;
            end=i;
        }
        if(max_ending_here<0)
        {
            max_ending_here=0;
            si=i+1;
        }
    }
    vector<int>v;
    if(start==end&&start==0&&a[0]==-1)
    {
        return v;
    }
    v.push_back(start+1);
    v.push_back(end+1);
    return v;
}
