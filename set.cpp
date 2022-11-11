#include <bits/stdc++.h> 
using namespace std;

int main(){

// sets store only unique elements.

set<int>s;
s.insert(6);
s.insert(2);
s.insert(5);
s.insert(4);
s.insert(2);
s.insert(3);
s.insert(1);
s.insert(9);

for(auto i:s){
    cout<<i<<" ";
}
cout<<endl;

set <int> ::iterator it=s.begin();
it++;

//auto it=s.begin();
s.erase(it);      //erases first element from the index one element
//s.erase(*it+2)  //erases 2nd element from the index one element
for(auto i:s){
    cout<<i<<" ";
}
cout<<"\n5 is present or not\t"<<s.count(5)<<endl;

auto itr=s.find(3); //returns iterator of 5.
cout<<"Value at itr: \t"<<*itr<<endl;

for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
}
return 0;
}