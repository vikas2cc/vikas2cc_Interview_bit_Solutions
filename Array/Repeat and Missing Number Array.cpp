#define ll long long int
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    ll n=A.size();
    int a,b;
    long long int suma=0;
    long long int sumas=0;
    for(auto x:A)
    {
        suma+=(ll)x;
        sumas+=(ll)x*(ll)x;
    }
    
    ll diff= n*(n+1)/2-suma;
    ll add =(n*(n+1))*(2*n+1)/6-sumas;
    ll sumi= add/diff;
    a=(diff+sumi)/2;
    b=(sumi-diff)/2;
    vector<int>v;
    v.push_back(b);
    v.push_back(a);
    return v;
}
