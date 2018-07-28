vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int sa=A.size();
    int sb=B.size();
    int a=0,b=0;
    vector<int>ans;
    while(a<sa&&b<sb)
    {
        if(A[a]==B[b])
        {
            ans.push_back(A[a]);
            a++;
            b++;
        }
        else if(A[a]<B[b])
        {
            a++;
        }
        else b++;
    }
    return ans;
}
