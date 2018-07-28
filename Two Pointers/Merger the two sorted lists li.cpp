void Solution::merge(vector<int> &A, vector<int> &B) {
    
    int sa=A.size();
    int sb=B.size();
    if(sa==0||sb==0){
        return;
    }
    //vector<int>::iterator it=A.begin();
    int j=0;
    for(int i=0; j<sb&&i<A.size(); i++)
    {
        if(A[i]<B[j]){continue;}
        else 
        {   
            A.insert(A.begin()+i,B[j]);
            j++;
        }
    }
    if(A.size()<sa+sb)
    {
        for(int i=j; i<sb; i++)A.push_back(B[i]);
    }
    //sa=A.size();
    /*for(int i=0; i<sa; i++)
    {
        cout<<A[i]<<" ";
    }*/
}
