vector<vector<int> > Solution::generateMatrix(int n) {
    vector<vector<int> >v(n,vector<int>(n));
    int rtl=0,ctl=0;
    int rtr=0,ctr=n-1;
    int rbl=n-1,cbl=0;
    int rbr=n-1,cbr=n-1;
    int i,j;
    int num=1;
    if(n==1)
    {
        v[0][0]=1;
        return v;
    }
    while(1)
    {
        for(i=ctl; i<=ctr; i++)v[rtl][i]=num++;
        for(i=rtr+1; i<=rbr; i++)v[i][ctr]=num++;
        for(i=cbr-1; i>=cbl; i--)v[rbr][i]=num++;
        for(i=rbl-1; i>rtl; i--)v[i][cbl]=num++;
        rtl++; ctl++;
        rtr++; ctr--;
        rbl--; cbl++;
        rbr--; cbr--;
        if(n%2==0)
        {
            if(ctr<ctl)break;
        }
        else
        {
            if(ctr==ctl)
            {
                v[rtl][ctl]=num;
                break;
            }
        }
    }
    return v;
}
