#include <bits/stdc++.h> 
using namespace std;
int main(){
vector <int>a;
cout<<a.capacity()<<endl;
a.push_back(1);
cout<<a.capacity()<<endl;

a.push_back(2);
cout<<a.capacity()<<endl;

a.push_back(4);
cout<<a.capacity()<<endl;
cout<<a.size()<<endl;

cout<<"Element at index 1: "<<a.at(1)<<endl;
cout<<"Empty or not: "<<a.empty()<<endl;

deque <int> d;
d.push_back(1);// 3 2 1 4
d.push_front(2);
d.push_front(3);
d.push_back(4);

d.erase(d.begin(),d.begin()+1); //2 1  4
//d.erase(d.begin(),d.begin()+2);  /// 1 4


for( int value:d){
    cout<<value<<" ";
}
cout<<"\nFirst index element :\t"<<d.at(1);
cout<<"\nEmpty or not: "<<d.empty()<<endl;
//when we use clear function,only size is made zero but capacity is still there.
    return 0;
}