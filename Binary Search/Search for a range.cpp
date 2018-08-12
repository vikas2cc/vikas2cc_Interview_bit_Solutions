vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n=A.size();
    vector<int>ans;
    bool bin=binary_search(A.begin(),A.end(),B);
    if(!bin)
    {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    int low=lower_bound(A.begin(),A.end(),B)-A.begin();
    int up=upper_bound(A.begin(),A.end(),B)-A.begin();
        ans.push_back(low);
        up--;
        ans.push_back(up);
        return ans;
}
