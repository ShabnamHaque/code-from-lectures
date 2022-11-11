#include <bits/stdc++.h> 
using namespace std;

int main(){

list <int> l;
l.push_back(2);
l.push_front(1);

//l.erase(l.begin());
for(int i:l){
    cout<<i<<" ";
}
// to copy
// list <int> n(l);
    return 0;
}