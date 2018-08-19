vector<int> Solution::getRow(int k) {
    vector<int>a;
    vector<int>b;
    a.push_back(1);
    if(k==0)return a;
    b.push_back(1);
    b.push_back(1);
    if(k==1)return b;
    int af=0,bf=0;
    for(int i=0; i<k-1; i++)
    {
        if(i%2==0)
        {
            a.clear();
            int s=b.size();
            a.push_back(1);
            for(int i=1; i<s; i++)
            {
                a.push_back(b[i-1]+b[i]);
            }
            a.push_back(1);
            af=1;
            bf=0;
        }
        else
        {
            b.clear();
            int s=a.size();
            b.push_back(1);
            for(int i=1; i<s; i++)
            {
                b.push_back(a[i-1]+a[i]);
            }
            b.push_back(1);
            af=0; bf=1;
        }
    }
    if(af)return a;
    else return b;
}
