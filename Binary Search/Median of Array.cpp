double Solution::findMedianSortedArrays(const vector<int> &x, const vector<int> &y) {
   
   int sa=x.size();
   int sb=y.size();
   if(sa>sb)return findMedianSortedArrays(y,x);
   
   int low=0;
   int high=sa;
   
   while(low<=high)
   {
       int px=(low+high)/2;
       int py=(sa+sb+1)/2-px;
       
       int maxleftx = (px==0)?(INT_MIN):x[px-1];
       int minrightx = (px==sa)?(INT_MAX):x[px];
       
       int maxlefty = (py==0)?(INT_MIN):y[py-1];
       int minrighty = (py==sb)?(INT_MAX):y[py];
       
       if(maxleftx<=minrighty&&maxlefty<=minrightx)
       {
           if((sa+sb)%2==0)
           {
               return double((max(maxleftx,maxlefty)+min(minrightx,minrighty)))/2.0;
           }
           else
           {
               return (double)max(maxleftx,maxlefty);
           }
       }
       else if(maxleftx>minrighty)
       {
           high=px-1;
       }
       else
       {
           low=px+1;
       }
   }
   
}
