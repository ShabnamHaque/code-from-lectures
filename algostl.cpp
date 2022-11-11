#include <bits/stdc++.h> 
using namespace std;

int main(){

vector<int>v;

v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(1);
v.push_back(6);
v.push_back(7);
v.push_back(9);

int i;
cout<<"enter i:\n";
cin>>i;

    cout<<"Finding i  "<<binary_search(v.begin(),v.end(),i)<<endl;

//to return iterator
// 2 3 4 1 6

cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
   
   cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

string s="abcde";
//reverse(s.begin()+1,s.end()); aedcb

//rotate(s.begin(),s.begin()+2,s.end()); // cdeab
//rotate(s.begin(),s.end()-2,s.end()); // deabc

rotate(s.begin(),s.begin()+1,s.end()); //bcdea
    cout<<s;

    return 0;
}