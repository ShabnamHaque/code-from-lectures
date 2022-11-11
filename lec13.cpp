#include <bits/stdc++.h>
using namespace std;


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

int main(){
int arr1[]={8,10,19,1,3};
cout<<"Pivot index:"<<getpivot(arr1,6); //1
    return 0;

}