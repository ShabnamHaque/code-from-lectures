#include <bits/stdc++.h>
using namespace std;



//SEARCH IN A REVRSED SORTED ARRAY


int getpivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]) s=mid+1;
        else {e=mid;
        }
      mid=s+(e-s)/2;
    }
    
    return s;
}
int bs(int arr[],int s1,int e1,int key){
int s=s1;
    int e=e1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(key==arr[mid]){
        return mid;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

 
int search(int arr[], int n, int key) {
    // Write your code here.
    
    int pivot=getpivot(arr,n);
    if(key>=arr[pivot] && key<=arr[n-1])
         return bs(arr,pivot,n-1,key);
    else
         return bs(arr,0,pivot,key);
    
}

int main(){
int arr[]={2,3,5,1,2};
cout<<search(arr,5,1);

    return 0;
}