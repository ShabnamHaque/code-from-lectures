#include <bits/stdc++.h>
using namespace std;

void printarray(int a[],int n){
   for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sort(int a[],int n){
 int left=0,right=n-1;
 while(left<right){
    while(a[left]==0 && left<right) left++;
    while(a[right]==1 && left<right) right--;

    swap(a[left],a[right]);
    left++;
    right--;
}

}
int main(){

    int a[7]={1,0,1,1,1,0,0};
    sort(a,7);
    printarray(a,7);


    return 0;
}