bool ispossible(vector<int> &stalls, int k,int mid)
{   int cowcount=1;
    int  lastpos=stalls[0];
    int e=0;
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastpos>=mid)
             cowcount++;
        if(cowcount==k){
            return false;
        }   
        lastpos=stalls[i];
    }
 return true;
}
int aggressiveCows(vector<int> &stalls, int k)
{ sort(stalls.begin(),stalls.end());
       int s=0;
    int maxi=-2;
    for(int i=0;i<stalls;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int ans=-1;
    int   mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(stalls,k,mid){
            ans=mid;
            s=mid+1;
        }
           else{
               e=mid-1;
           }
           mid=s+(e-s)/2;
    }
           return ans;
}