#include <bits/stdc++.h> 
using namespace std;

int main(){
// max heap
priority_queue<int> maxi;

//min heap
priority_queue<int,vector<int>,greater<int>>mini;

maxi.push(2);
maxi.push(4);
maxi.push(3);
maxi.push(2);
maxi.push(1);

int n=maxi.size();
for(int i=0;i<n;i++){
 cout<<maxi.top()<<" ";
 maxi.pop();
}
cout<<endl;
mini.push(2);
mini.push(4);
mini.push(3);
mini.push(-2);
mini.push(1);

int n2=mini.size();
for(int i=0;i<n2;i++){
 cout<<mini.top()<<" ";
 mini.pop();
}

// maxi and mini are emptied.
cout<<endl<<"Empty?  "<<mini.empty()<<endl;


map<int,string> m1;

m1[3]="haque";
m1[1]="miss";
m1[2]="shabnam";  //1 is key , string is value.

//m1.erase(1);
m1.insert({4,"CFA"});
for(auto i:m1){
  cout<<i.first<<" ";
}
for(auto i:m1){
  cout<<i.second<<" ";
}
cout<<"\nFinding 3: "<<m1.count(3)<<endl;  //O(logn) by RBTs.
//unordered map through hash tables hence O(1)
auto it=m1.find(2);
for(auto i=it;i!=m1.end();i++){
     cout<<i->second<<" "; //(*i).second 
}


    return 0;
}