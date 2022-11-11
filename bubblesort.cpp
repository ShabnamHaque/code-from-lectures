#include <bits/stdc++.h> 

// void bubbleSort(vector<int>& arr, int n)
// {   
//    for(int i=1;i<n;i++){
//        //for round 1 to n-1
//          for(int j=0;j<n-i;j++)
//          //process only till n-i th index{
     
//        if(arr[j]>arr[j+1])
//             swap(arr[j],arr[j+1]);
//    }
//   }
// }

//******best case O(n)*********
//worst case O(n^2)

void bubbleSort(vector<int>& arr, int n)
{   
   for(int i=1;i<n;i++){
       //for round 1 to n-1
        bool swapped=false;
         for(int j=0;j<n-i;j++){
    
       if(arr[j]>arr[j+1])
       { swapped=true;
            swap(arr[j],arr[j+1]); 
   }
         }
       if(swapped==false){
        //already sorted
           break;
       }
  }
}
