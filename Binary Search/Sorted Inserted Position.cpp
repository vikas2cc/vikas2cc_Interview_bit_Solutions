int Solution::searchInsert(vector<int> &A, int B) {
    int n=A.size();
    int index = lower_bound(A.begin(),A.begin()+n,B)-A.begin();
    return index;
}
