#include <bits/stdc++.h> 
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
             int minindex=i;
        if(arr[j]<arr[minindex])
        {  minindex=j;}
        swap(arr[minindex],arr[i]);
    }
    }
}

int main(){
    vector<int> array={1,4,5,67,7};
    selectionSort(array,5);
   
   

   return 0;
}