#include <bits/stdc++.h> 
using namespace std;

char firstchar(string str)
{
    return str.at(0);
}
char secondchar(string str)
{
    return str.at(1);
}

int main(){
int n;
cin>>n;
if(n>=1 and n<=150){
string s;
string st[n];
for(int i=0;i<n;i++){
    
    cin>>s;
    if(s=="x--" || s=="x++" || s=="--x" || s=="++x")
    st[i]=s;
}
char array[n];
for(int i=0;i<n;i++){
     array[i]=firstchar(st[i]);
}
char array2[n];
for(int i=0;i<n;i++){
     array2[i]=secondchar(st[i]);
}

int sum=0;

for(int i=0;i<n;i++){
  if(array[i]=='+') sum++;
  else if(array[i]=='-') sum--;
  else if(array[i]=='x'){
    if(array2[i]=='-') sum--;
    else sum++;
  }
}
cout<<endl<<sum;
}
map<int,string> m1;

m1[1]="miss";
m1[3]="haque";
m1[2]="shabnam";

m1.insert({4,"CFA"});

for(auto i:m1){
  cout<<i.first<<" ";
}
for(auto i:m1){
  cout<<i.second<<" ";
}
cout<<"\nFinding 3: "<<m1.count(13);

    return 0;
}